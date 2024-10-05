#pragma once
#include "CoreMinimal.h"
#include "DiscordGatewayActivityAsset.h"
#include "DiscordGatewayActivityParty.h"
#include "DiscordGatewayActivitySecrets.h"
#include "DiscordGatewayActivityTimestamps.h"
#include "DiscordGatewayEmoji.h"
#include "EDiscordGatewayActivity.h"
#include "EDiscordGatewayActivityFlags.h"
#include "DiscordGatewayActivity.generated.h"

USTRUCT(BlueprintType)
struct DISCORDGATEWAY_API FDiscordGatewayActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordGatewayActivity Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewayActivityTimestamps Timestamps;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ApplicationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewayEmoji Emoji;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewayActivityParty Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewayActivityAsset Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordGatewayActivitySecrets Secrets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDiscordGatewayActivityFlags> Flags;
    
    FDiscordGatewayActivity();
};

