#pragma once
#include "CoreMinimal.h"
#include "Uint64.h"
#include "DiscordOnMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordOnMessage, const FUint64&, PeerId, uint8, ChannelId, const TArray<uint8>&, Data);

