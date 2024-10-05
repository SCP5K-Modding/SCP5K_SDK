#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FPSAnimationInstance.h"
#include "ThrowableAnimInstance.generated.h"

class AFPSCharacterBase;
class UAnimSequence;
class UFPSItemData;
class UFPSThrowableData;
class UFPSWeaponData;

UCLASS(Blueprintable, NonTransient)
class FPSCONTROLLER_API UThrowableAnimInstance : public UAnimInstance, public IFPSAnimationInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSCharacterBase* FPSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSThrowableData* ThrowableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* BasePoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* MoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* SprintAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* ReadyBasePoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReady;
    
    UThrowableAnimInstance();


    // Fix for true pure virtual functions not being implemented
};

