#pragma once
#include "CoreMinimal.h"
#include "DiscordWebhookUser.h"
#include "EDiscordWebhookType.h"
#include "DiscordWebhook.generated.h"

USTRUCT(BlueprintType)
struct DISCORDHTTPAPI_API FDiscordWebhook {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordWebhookType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GuildId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ChannelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordWebhookUser User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    FDiscordWebhook();
};

