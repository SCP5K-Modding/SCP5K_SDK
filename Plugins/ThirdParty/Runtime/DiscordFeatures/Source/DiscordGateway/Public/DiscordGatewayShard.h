#pragma once
#include "CoreMinimal.h"
#include "DiscordGatewayShard.generated.h"

USTRUCT(BlueprintType)
struct DISCORDGATEWAY_API FDiscordGatewayShard {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ShardId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumShards;
    
    FDiscordGatewayShard();
};

