#pragma once
#include "CoreMinimal.h"
#include "CharacterControllerChangedDelegateDelegate.generated.h"

class AController;
class AFPSCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterControllerChangedDelegate, AFPSCharacterBase*, Character, AController*, Controller);

