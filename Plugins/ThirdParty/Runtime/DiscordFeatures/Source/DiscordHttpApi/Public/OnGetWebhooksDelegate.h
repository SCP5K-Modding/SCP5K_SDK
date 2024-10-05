#pragma once
#include "CoreMinimal.h"
#include "DiscordWebhook.h"
#include "OnGetWebhooksDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetWebhooks, const TArray<FDiscordWebhook>&, Webhooks);

