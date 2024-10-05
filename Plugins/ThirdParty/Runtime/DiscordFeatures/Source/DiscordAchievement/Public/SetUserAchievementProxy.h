#pragma once
#include "CoreMinimal.h"
#include "BaseAchievementAsyncProxy.h"
#include "SetUserAchievementProxy.generated.h"

class UDiscordAchievementManager;
class USetUserAchievementProxy;

UCLASS(Blueprintable)
class USetUserAchievementProxy : public UBaseAchievementAsyncProxy {
    GENERATED_BODY()
public:
    USetUserAchievementProxy();

    UFUNCTION(BlueprintCallable)
    static USetUserAchievementProxy* SetUserAchievement(UDiscordAchievementManager* AchievementManager, const int64 AchievementId, uint8 PercentComplete);
    
};

