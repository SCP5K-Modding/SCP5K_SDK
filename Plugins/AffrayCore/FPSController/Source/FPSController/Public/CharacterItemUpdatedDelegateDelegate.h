#pragma once
#include "CoreMinimal.h"
#include "CharacterItemUpdatedDelegateDelegate.generated.h"

class AFPSCharacterBase;
class AFPSItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterItemUpdatedDelegate, AFPSCharacterBase*, Character, AFPSItem*, Item);

