#pragma once
#include "CoreMinimal.h"
#include "DiscordActivityTimestamps.generated.h"

USTRUCT(BlueprintType)
struct DISCORDCORE_API FDiscordActivityTimestamps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Start;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 End;
    
    FDiscordActivityTimestamps();
};

