#pragma once
#include "CoreMinimal.h"
#include "EDiscordEntitlementType.generated.h"

UENUM(BlueprintType)
enum class EDiscordEntitlementType : uint8 {
    None,
    Purchase,
    PremiumSubscription,
    DeveloperGift,
    TestModePurchase,
    FreePurchase,
    UserGift,
    PremiumPurchase,
};

