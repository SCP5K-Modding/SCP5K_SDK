#pragma once
#include "CoreMinimal.h"
#include "EDiscordResult.h"
#include "DiscordOAuth2Token.h"
#include "DiscordOnOAuth2TokenReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordOnOAuth2TokenReceived, EDiscordResult, Result, const FDiscordOAuth2Token&, Token);

