#pragma once
#include "CoreMinimal.h"
#include "DiscordSkuPrice.generated.h"

USTRUCT(BlueprintType)
struct DISCORDSTORE_API FDiscordSkuPrice {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Currency;
    
    FDiscordSkuPrice();
};

