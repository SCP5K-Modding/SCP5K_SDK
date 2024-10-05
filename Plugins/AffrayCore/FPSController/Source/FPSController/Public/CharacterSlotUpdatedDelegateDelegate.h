#pragma once
#include "CoreMinimal.h"
#include "CharacterSlotUpdatedDelegateDelegate.generated.h"

class AFPSCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterSlotUpdatedDelegate, AFPSCharacterBase*, Character, int32, Slot);

