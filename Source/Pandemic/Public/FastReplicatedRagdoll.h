#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KismetSystemLibrary -FallbackName=KismetSystemLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EAxisToVector.h"
#include "FastReplicatedRagdoll.generated.h"

class ACharacter;
class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFastReplicatedRagdoll : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSyncSnapshotDelegate, FPoseSnapshot, UpdatedPoseSnapshot, bool, bIsFaceUp);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSyncSnapshotDelegate OnSyncPoseSnapshot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FaceUpDownRefBones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAxisToVector RefBoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInitialForceCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceCorrectionTargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TorgueForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RagdollPhysicalAnimationProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoRagdollPhysicalAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RagdollAnimationSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollPhysicalAnimationSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollPhysicalAnimationStrengthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimSequence>> RagdollPhysicalAnimationAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKismetSystemLibrary::FOnAssetLoaded OnAssetLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsControlledRagdollPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwningSkeletalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerRagdollLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ServerRagdollLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OriginalPhysicalAnimationProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneName;
    
public:
    UFastReplicatedRagdoll(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopAndReclaimRagdoll();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetServerRagdollLocation(FVector_NetQuantize NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningSkeletalComponent(USkeletalMeshComponent* InOwningSkelComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningCharacter(ACharacter* InOwner);
    
public:
    UFUNCTION(BlueprintCallable)
    void PrepareRagdoll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ServerRagdollLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnParentReportsShouldRagdoll();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RagdollStopAndReclaim();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RagdollPrepare();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RagdollInitiate(const FVector_NetQuantize InheritedVelocity);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitiateRagdoll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwningSkeletalComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetOwningCharacter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRagdolling() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DrawDebugBoneTransforms() const;
    
};

