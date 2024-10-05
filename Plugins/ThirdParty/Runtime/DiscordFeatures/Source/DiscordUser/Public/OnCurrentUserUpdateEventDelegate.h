#pragma once
#include "CoreMinimal.h"
#include "DiscordUser.h"
#include "OnCurrentUserUpdateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentUserUpdateEvent, const FDiscordUser&, CurrentUser);

