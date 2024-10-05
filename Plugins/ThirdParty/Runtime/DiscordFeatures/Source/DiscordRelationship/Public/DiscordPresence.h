#pragma once
#include "CoreMinimal.h"
#include "DiscordActivity.h"
#include "EDiscordStatus.h"
#include "DiscordPresence.generated.h"

USTRUCT(BlueprintType)
struct DISCORDRELATIONSHIP_API FDiscordPresence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordActivity Activity;
    
    FDiscordPresence();
};

