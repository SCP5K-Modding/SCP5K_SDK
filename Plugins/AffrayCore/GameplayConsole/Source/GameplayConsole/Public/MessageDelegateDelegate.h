#pragma once
#include "CoreMinimal.h"
#include "EMessageType.h"
#include "MessageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMessageDelegate, const FString&, Text, EMessageType, MessageType, const FString&, Tooltip);

