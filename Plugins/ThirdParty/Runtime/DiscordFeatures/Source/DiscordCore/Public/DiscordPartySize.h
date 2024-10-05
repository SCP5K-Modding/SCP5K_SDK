#pragma once
#include "CoreMinimal.h"
#include "DiscordPartySize.generated.h"

USTRUCT(BlueprintType)
struct DISCORDCORE_API FDiscordPartySize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSize;
    
    FDiscordPartySize();
};

