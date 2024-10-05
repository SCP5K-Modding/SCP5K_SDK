#pragma once
#include "CoreMinimal.h"
#include "AddChatMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddChatMessage, const FString&, Name, const FString&, Message);

