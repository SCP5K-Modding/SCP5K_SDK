#pragma once
#include "CoreMinimal.h"
#include "DiscordGatewayActivityTimestamps.generated.h"

USTRUCT(BlueprintType)
struct DISCORDGATEWAY_API FDiscordGatewayActivityTimestamps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 End;
    
    FDiscordGatewayActivityTimestamps();
};

