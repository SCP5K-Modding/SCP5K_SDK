#pragma once
#include "CoreMinimal.h"
#include "DiscordUser.h"
#include "DiscordPresence.h"
#include "EDiscordRelationshipType.h"
#include "DiscordRelationship.generated.h"

USTRUCT(BlueprintType)
struct DISCORDRELATIONSHIP_API FDiscordRelationship {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscordRelationshipType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordUser User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordPresence Presence;
    
    FDiscordRelationship();
};

