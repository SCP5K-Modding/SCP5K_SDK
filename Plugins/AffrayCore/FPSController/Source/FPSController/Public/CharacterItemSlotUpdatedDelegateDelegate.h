#pragma once
#include "CoreMinimal.h"
#include "CharacterItemSlotUpdatedDelegateDelegate.generated.h"

class AFPSCharacterBase;
class AFPSItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterItemSlotUpdatedDelegate, AFPSCharacterBase*, Character, AFPSItem*, Item, int32, Slot);

