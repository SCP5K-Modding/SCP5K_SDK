#pragma once
#include "CoreMinimal.h"
#include "DiscordGatewayActivityAsset.generated.h"

USTRUCT(BlueprintType)
struct DISCORDGATEWAY_API FDiscordGatewayActivityAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LargeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LargeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SmallImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SmallText;
    
    FDiscordGatewayActivityAsset();
};

