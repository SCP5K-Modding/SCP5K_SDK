#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=EStaggerDirection -FallbackName=EStaggerDirection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RepMovement -FallbackName=RepMovement
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "ReanimationComponent.generated.h"

class ACharacter;
class UAnimMontage;
class UReanimationComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UReanimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReanimationUpdated, UReanimationComponent*, ReanimationComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnReanimationStarted, UReanimationComponent*, ReanimationComponent, UAnimMontage*, ReanimationMontage, FVector, TargetCapsuleLocation);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReanimationStarted OnReanimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReanimationUpdated OnReanimationComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReanimating;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerPoseRepMovement, meta=(AllowPrivateAccess=true))
    FRepMovement ServerPoseRepMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutomaticallyReanimated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutomaticReanimationVelocityCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutomaticReanimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseClientPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollBlendOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationForwardApex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationBackwardApex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultForwardReanimationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultBackwardReanimationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> PelvisForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> PelvisUpAxis;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipForwardAxis;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipUpAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PelvisSocketRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRagdollGrounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceHitCollisionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDrawDebugTrace::Type> DebugTraceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPelvisGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPelvisOffsetFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PelvisOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastPlayedMontage;
    
public:
    UReanimationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetServerPoseRepMovement(FVector_NetQuantize ServerLocation, FRotator ServerRotation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningSkeletalComponent(USkeletalMeshComponent* SkeletalComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOwningCharacter(ACharacter* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsReanimating(bool bReanimating);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsRagdollGrounded(bool bGrounded);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartReanimation(bool bIsUsingAnimation, UAnimMontage* ReanimationMontage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ServerFindPelvisOffset(FVector& OutOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    float ReanimateRagdoll(bool bIsUsingAnimation, EStaggerDirection PoseDirection, float PoseRotationYaw, FVector ReanimationVelocity, FVector TargetCapsuleLocation, UAnimMontage* ReanimationMontage);
    
    UFUNCTION(BlueprintCallable)
    void ReanimateImmediate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ServerPoseRepMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_OwningCharacter();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartReanimation(bool bIsUsingAnimation, EStaggerDirection PoseDirection, float PoseRotationYaw, FVector ReanimationVelocity, FVector TargetCapsuleLocation, UAnimMontage* ReanimationMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEndRagdollReanimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPelvisOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwningSkeletalComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReanimating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRagdollGrounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPelvisOffsetFound() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteReanimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    EStaggerDirection CalculateRagdollRotationDirection(float& OutPelvisYaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateCharacterVelocity(bool bIsRagdollVelocity) const;
    
};

