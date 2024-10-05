#pragma once
#include "CoreMinimal.h"
#include "DiscordUserAchievement.generated.h"

USTRUCT(BlueprintType)
struct FDiscordUserAchievement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AchievementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AchievementPercentComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementUnlockedAt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UserId;
    
    DISCORDACHIEVEMENT_API FDiscordUserAchievement();
};

