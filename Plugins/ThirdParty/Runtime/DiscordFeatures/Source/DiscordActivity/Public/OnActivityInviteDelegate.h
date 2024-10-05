#pragma once
#include "CoreMinimal.h"
#include "DiscordActivity.h"
#include "DiscordUser.h"
#include "EDiscordActivityActionType.h"
#include "OnActivityInviteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActivityInvite, const EDiscordActivityActionType, Action, const FDiscordUser&, User, const FDiscordActivity&, Activity);

