#pragma once
#include "CoreMinimal.h"
#include "DiscordSkuPrice.h"
#include "EDiscordSkuType.h"
#include "DiscordSku.generated.h"

USTRUCT(BlueprintType)
struct DISCORDSTORE_API FDiscordSku {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordSkuType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordSkuPrice Price;
    
    FDiscordSku();
};

