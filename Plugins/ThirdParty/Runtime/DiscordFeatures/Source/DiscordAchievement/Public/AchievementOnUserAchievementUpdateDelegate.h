#pragma once
#include "CoreMinimal.h"
#include "DiscordUserAchievement.h"
#include "AchievementOnUserAchievementUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAchievementOnUserAchievementUpdate, const FDiscordUserAchievement&, Achievement);

