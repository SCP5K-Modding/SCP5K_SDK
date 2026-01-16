#pragma once
#include "CoreMinimal.h"
#include "ItemAnimInstance.h"
#include "MeleeWeaponAnimInstance.generated.h"

class UFPSMeleeWeaponData;

UCLASS(Blueprintable, NonTransient)
class FPSCONTROLLER_API UMeleeWeaponAnimInstance : public UItemAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFPSMeleeWeaponData* MeleeData;
    
    UMeleeWeaponAnimInstance();

};

