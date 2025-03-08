#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FPSAnimationInstance.h"
#include "ItemAnimInstance.generated.h"

class AFPSCharacterBase;
class UAnimSequence;
class UFPSItemData;

UCLASS(Blueprintable, NonTransient)
class FPSCONTROLLER_API UItemAnimInstance : public UAnimInstance, public IFPSAnimationInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFPSCharacterBase* FPSCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* BasePoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* MoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* SprintAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* ReadyBasePoseAnim;
    
public:
    UItemAnimInstance();


    // Fix for true pure virtual functions not being implemented
};

