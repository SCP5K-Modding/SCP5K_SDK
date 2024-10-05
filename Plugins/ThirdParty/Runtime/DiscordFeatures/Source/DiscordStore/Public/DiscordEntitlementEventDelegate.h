#pragma once
#include "CoreMinimal.h"
#include "DiscordEntitlement.h"
#include "DiscordEntitlementEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordEntitlementEvent, const FDiscordEntitlement&, Entitlement);

