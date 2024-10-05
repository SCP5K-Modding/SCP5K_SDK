#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "AchievementOnUserAchievementUpdateDelegate.h"
#include "DiscordUserAchievement.h"
#include "DiscordAchievementManager.generated.h"

class UDiscordAchievementManager;
class UDiscordCore;

UCLASS(Blueprintable)
class DISCORDACHIEVEMENT_API UDiscordAchievementManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementOnUserAchievementUpdate OnUserAchievementUpdate;
    
    UDiscordAchievementManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUserAchievement GetUserAchievementAt(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordAchievementManager* GetAchievementManager(const UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountUserAchievements() const;
    
};

