#pragma once
#include "CoreMinimal.h"
#include "CharacterPlayerStateChangedDelegateDelegate.generated.h"

class AFPSCharacterBase;
class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterPlayerStateChangedDelegate, AFPSCharacterBase*, Character, APlayerState*, PlayerState);

