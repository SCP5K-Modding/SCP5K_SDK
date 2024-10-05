#pragma once
#include "CoreMinimal.h"
#include "DiscordAllowedMentions.h"
#include "DiscordWebhookEmbed.h"
#include "DiscordWebhookData.generated.h"

USTRUCT(BlueprintType)
struct DISCORDHTTPAPI_API FDiscordWebhookData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString File;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiscordWebhookEmbed> Embeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordAllowedMentions AllowedMentions;
    
    FDiscordWebhookData();
};

