#pragma once
#include "CoreMinimal.h"
#include "OnPickedUpDelegateDelegate.generated.h"

class AFPSCharacterBase;
class AFPSItemPickup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPickedUpDelegate, AFPSItemPickup*, Pickup, AFPSCharacterBase*, Character);

