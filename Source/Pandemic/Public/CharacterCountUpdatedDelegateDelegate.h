#pragma once
#include "CoreMinimal.h"
#include "CharacterCountUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterCountUpdatedDelegate, int32, MaxCharacterCount);

