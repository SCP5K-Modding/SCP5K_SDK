#pragma once
#include "CoreMinimal.h"
#include "EDiscordEntitlementType.h"
#include "DiscordEntitlement.generated.h"

USTRUCT(BlueprintType)
struct DISCORDCORE_API FDiscordEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordEntitlementType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SkuId;
    
    FDiscordEntitlement();
};

