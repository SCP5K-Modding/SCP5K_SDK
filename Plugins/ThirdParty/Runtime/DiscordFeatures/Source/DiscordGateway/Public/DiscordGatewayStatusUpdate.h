#pragma once
#include "CoreMinimal.h"
#include "DiscordGatewayActivity.h"
#include "DiscordGatewayStatusUpdate.generated.h"

USTRUCT(BlueprintType)
struct DISCORDGATEWAY_API FDiscordGatewayStatusUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Since;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiscordGatewayActivity> Activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAfk;
    
    FDiscordGatewayStatusUpdate();
};

