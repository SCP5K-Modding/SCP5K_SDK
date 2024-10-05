#pragma once
#include "CoreMinimal.h"
#include "DiscordEntitlement.h"
#include "DiscordUser.h"
#include "DiscordSignedAppTicket.generated.h"

USTRUCT(BlueprintType)
struct DISCORDAPPLICATION_API FDiscordSignedAppTicket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ApplicationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordUser User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiscordEntitlement> Entitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Timestamp;
    
    FDiscordSignedAppTicket();
};

