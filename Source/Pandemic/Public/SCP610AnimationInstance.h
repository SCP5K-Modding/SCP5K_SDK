#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "EZombieLifeState.h"
#include "HitReactionInterface.h"
#include "ReanimationAnimInstance.h"
#include "SCP610AnimationInstance.generated.h"

class ACharacter;
class ASCP610Character;
class UAnimSequenceBase;
class UHealthComponent;

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API USCP610AnimationInstance : public UAnimInstance, public IReanimationAnimInstance, public IHitReactionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFakingDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EZombieLifeState CurrentLifeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPoseSnapshot SavedRagdollSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPoseSnapshot SyncedRagdollSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReanimating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LocalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LocalAccelleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> PossibleIdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RandomIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RandomizedAnimStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> PossibleLocomotionAdditiveAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RandomLocomotionAdditiveAnimation;
    
public:
    USCP610AnimationInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSCPCharacter(ASCP610Character* DesiredCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(ACharacter* DesiredCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncPoseSnapshot(const FPoseSnapshot UpdatedPoseSnapshot, const bool bIsFaceUp);
    
private:
    UFUNCTION(BlueprintCallable)
    void On610UpdatedLifeState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void On610Died(UHealthComponent* UpdatedHealthComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPoseSnapshot GetSyncedRagdollSnapshot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASCP610Character* GetSCPCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacter() const;
    

    // Fix for true pure virtual functions not being implemented
};

