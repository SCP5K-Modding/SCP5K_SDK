#pragma once
#include "CoreMinimal.h"
#include "DiscordActivitySecrets.generated.h"

USTRUCT(BlueprintType)
struct DISCORDCORE_API FDiscordActivitySecrets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Match;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Join;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Spectate;
    
    FDiscordActivitySecrets();
};

