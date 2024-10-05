#pragma once
#include "CoreMinimal.h"
#include "DiscordWebhook.h"
#include "OnWebhookCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWebhookCreated, const FDiscordWebhook&, NewWebhoook);

