#pragma once
#include "CoreMinimal.h"
#include "EReloadMode.h"
#include "OnReloadUpdatedDelegateDelegate.generated.h"

class AFPSRangedWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReloadUpdatedDelegate, AFPSRangedWeapon*, Weapon, EReloadMode, Mode);

