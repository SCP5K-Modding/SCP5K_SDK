#pragma once
#include "CoreMinimal.h"
#include "DiscordWebhookEmbedVideo.generated.h"

USTRUCT(BlueprintType)
struct DISCORDHTTPAPI_API FDiscordWebhookEmbedVideo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    FDiscordWebhookEmbedVideo();
};

