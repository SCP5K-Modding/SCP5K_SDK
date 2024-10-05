#pragma once
#include "CoreMinimal.h"
#include "FPSItemData.h"
#include "Templates/SubclassOf.h"
#include "FPSWeaponData.generated.h"

class UDamageType;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSWeaponData : public UFPSItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UFPSWeaponData();

};

