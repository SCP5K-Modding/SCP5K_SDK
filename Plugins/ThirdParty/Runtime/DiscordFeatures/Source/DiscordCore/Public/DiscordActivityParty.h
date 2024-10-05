#pragma once
#include "CoreMinimal.h"
#include "DiscordPartySize.h"
#include "DiscordActivityParty.generated.h"

USTRUCT(BlueprintType)
struct DISCORDCORE_API FDiscordActivityParty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordPartySize Size;
    
    FDiscordActivityParty();
};

