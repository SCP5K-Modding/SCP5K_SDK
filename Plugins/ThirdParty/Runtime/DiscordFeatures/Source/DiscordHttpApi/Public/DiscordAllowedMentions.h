#pragma once
#include "CoreMinimal.h"
#include "EDiscordAllowedMentionTypes.h"
#include "DiscordAllowedMentions.generated.h"

USTRUCT(BlueprintType)
struct DISCORDHTTPAPI_API FDiscordAllowedMentions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDiscordAllowedMentionTypes> Parse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Roles;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Users;
    
    FDiscordAllowedMentions();
};

