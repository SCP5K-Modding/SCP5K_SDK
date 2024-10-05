#pragma once
#include "CoreMinimal.h"
#include "DiscordOnRouteUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordOnRouteUpdate, const FString&, NewRoute);

