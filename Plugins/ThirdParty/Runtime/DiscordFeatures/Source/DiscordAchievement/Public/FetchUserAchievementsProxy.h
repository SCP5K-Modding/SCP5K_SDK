#pragma once
#include "CoreMinimal.h"
#include "BaseAchievementAsyncProxy.h"
#include "FetchUserAchievementsProxy.generated.h"

class UDiscordAchievementManager;
class UFetchUserAchievementsProxy;

UCLASS(Blueprintable)
class UFetchUserAchievementsProxy : public UBaseAchievementAsyncProxy {
    GENERATED_BODY()
public:
    UFetchUserAchievementsProxy();

    UFUNCTION(BlueprintCallable)
    static UFetchUserAchievementsProxy* FetchUserAchievements(UDiscordAchievementManager* AchievementManager);
    
};

