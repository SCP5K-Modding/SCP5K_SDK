#pragma once
#include "CoreMinimal.h"
#include "DiscordUser.h"
#include "EDiscordResult.h"
#include "OnGetUserEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetUserEvent, EDiscordResult, Result, const FDiscordUser&, User);

