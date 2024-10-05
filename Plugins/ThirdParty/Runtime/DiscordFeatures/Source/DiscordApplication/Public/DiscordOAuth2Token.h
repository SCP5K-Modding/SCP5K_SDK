#pragma once
#include "CoreMinimal.h"
#include "DiscordOAuth2Token.generated.h"

USTRUCT(BlueprintType)
struct DISCORDAPPLICATION_API FDiscordOAuth2Token {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccessToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Scopes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Expires;
    
    FDiscordOAuth2Token();
};

