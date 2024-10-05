#pragma once
#include "CoreMinimal.h"
#include "FPSItem.h"
#include "FPSWeapon.generated.h"

class UFPSWeaponData;

UCLASS(Abstract, Blueprintable)
class FPSCONTROLLER_API AFPSWeapon : public AFPSItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSWeaponData* WeaponData;
    
public:
    AFPSWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSWeaponData* GetWeaponData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamage();
    
};

