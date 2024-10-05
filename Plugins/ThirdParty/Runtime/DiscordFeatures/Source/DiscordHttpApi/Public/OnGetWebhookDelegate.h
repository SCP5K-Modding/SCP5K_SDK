#pragma once
#include "CoreMinimal.h"
#include "DiscordWebhook.h"
#include "OnGetWebhookDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetWebhook, const FDiscordWebhook&, Webhoook);

