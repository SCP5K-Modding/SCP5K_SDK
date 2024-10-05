#pragma once
#include "CoreMinimal.h"
#include "DiscordWebhookEmbedAuthor.generated.h"

USTRUCT(BlueprintType)
struct DISCORDHTTPAPI_API FDiscordWebhookEmbedAuthor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProxyIconUrl;
    
    FDiscordWebhookEmbedAuthor();
};

