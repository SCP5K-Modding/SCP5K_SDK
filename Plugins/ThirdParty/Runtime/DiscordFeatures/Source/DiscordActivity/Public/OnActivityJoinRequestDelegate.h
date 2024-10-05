#pragma once
#include "CoreMinimal.h"
#include "DiscordUser.h"
#include "OnActivityJoinRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivityJoinRequest, const FDiscordUser&, User);

