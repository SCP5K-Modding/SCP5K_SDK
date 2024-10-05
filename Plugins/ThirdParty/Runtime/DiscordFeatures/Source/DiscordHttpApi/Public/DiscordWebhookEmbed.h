#pragma once
#include "CoreMinimal.h"
#include "DiscordWebhookEmbedAuthor.h"
#include "DiscordWebhookEmbedField.h"
#include "DiscordWebhookEmbedFooter.h"
#include "DiscordWebhookEmbedImage.h"
#include "DiscordWebhookEmbedProvider.h"
#include "DiscordWebhookEmbedThumbnail.h"
#include "DiscordWebhookEmbedVideo.h"
#include "DiscordWebhookEmbed.generated.h"

USTRUCT(BlueprintType)
struct DISCORDHTTPAPI_API FDiscordWebhookEmbed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEmbedFooter Footer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEmbedImage Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEmbedThumbnail Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEmbedVideo Video;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEmbedProvider Provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookEmbedAuthor Author;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiscordWebhookEmbedField> Field;
    
    FDiscordWebhookEmbed();
};

