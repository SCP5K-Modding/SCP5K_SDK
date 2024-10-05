#pragma once
#include "CoreMinimal.h"
#include "DiscordActivityAssets.h"
#include "DiscordActivityParty.h"
#include "DiscordActivitySecrets.h"
#include "DiscordActivityTimestamps.h"
#include "EDiscordActivityType.h"
#include "DiscordActivity.generated.h"

USTRUCT(BlueprintType)
struct DISCORDCORE_API FDiscordActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordActivityType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ApplicationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordActivityTimestamps Timestamps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordActivityAssets Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordActivityParty Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordActivitySecrets Secrets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstance;
    
    FDiscordActivity();
};

