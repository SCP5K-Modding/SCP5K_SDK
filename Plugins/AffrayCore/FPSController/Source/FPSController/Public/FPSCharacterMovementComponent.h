#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EFPSCustomMovementMode.h"
#include "FPSCharacterMovementComponent.generated.h"

class AFPSCharacterBase;
class UAnimMontage;
class UClimbableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FPSCONTROLLER_API UFPSCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeedSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbMovementSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbMovementSpeedDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbEnterVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingBrakingDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementSpeedMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSCharacterBase* FPSCharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsProne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsClimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 ItemIndex;
    
public:
    UFPSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float TransitionToPoint(FTransform Target, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void StopSprinting();
    
    UFUNCTION(BlueprintCallable)
    void StartSprinting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomMovementMode(TEnumAsByte<EFPSCustomMovementMode> InMovementMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClimbableComponent* GetCurrentClimbable();
    
    UFUNCTION(BlueprintCallable)
    void ExitClimb();
    
    UFUNCTION(BlueprintCallable)
    void EnterClimb(UClimbableComponent* NewClimbable);
    
};

