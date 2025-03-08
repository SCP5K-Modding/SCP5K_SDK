#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "Engine/EngineTypes.h"
#include "RepTransform.h"
#include "ReplicatedRagdollData.h"
#include "ReplicatedRagdollComponent.generated.h"

class ACharacter;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UReplicatedRagdollComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSyncSnapshotDelegate, FPoseSnapshot, UpdatedPoseSnapshot);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSyncSnapshotDelegate OnSyncPoseSnapshot;
    
private:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRepMovement PelvisReplicatedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwningSkeletalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsRagdolling, meta=(AllowPrivateAccess=true))
    bool bIsRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsClientRagdollInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedRagdollData RagdollData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPelvisOffsetFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PelvisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollBlendInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollSnapshotSyncRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceHitCollisionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDrawDebugTrace::Type> DebugTraceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPelvisGroundDistance;
    
public:
    UReplicatedRagdollComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRagdollData(FReplicatedRagdollData Data);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningSkeletalComponent(USkeletalMeshComponent* SkeletalComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningCharacter(ACharacter* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsRagdolling(bool bRagdolling);
    
private:
    UFUNCTION(BlueprintCallable)
    void ServerUpdateReferences();
    
public:
    UFUNCTION(BlueprintCallable)
    void ServerStopRagdollSync();
    
    UFUNCTION(BlueprintCallable)
    void ServerStartRagdollSync();
    
protected:
    UFUNCTION(BlueprintCallable)
    FPoseSnapshot ServerGenerateSnapshot(FName SnapshotName);
    
    UFUNCTION(BlueprintCallable)
    void ServerFindPelvisOffset(FVector& OutOffset);
    
    UFUNCTION(BlueprintCallable)
    void RefreshRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsRagdolling();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastUpdateRagdollSnapshots(const TArray<FRepTransform>& BoneTransforms);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastUpdateLocation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartRagdollSync(FVector InitialVelocity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeRagdollSync(FVector InitialVelocity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReplicatedRagdollData GetRagdollData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPelvisOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwningSkeletalComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetOwningCharacter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRagdolling() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPelvisOffsetFound() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPoseSnapshot GetClientPoseSnapshot() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FPoseSnapshot ClientGenerateSnapshot(TArray<FRepTransform> BoneTransforms, FName SnapshotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateCharacterVelocity(bool bIsRagdollVelocity) const;
    
};

