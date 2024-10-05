#include "DiscordAchievementManager.h"

UDiscordAchievementManager::UDiscordAchievementManager() {
}

FDiscordUserAchievement UDiscordAchievementManager::GetUserAchievementAt(const int32 Index) {
    return FDiscordUserAchievement{};
}

UDiscordAchievementManager* UDiscordAchievementManager::GetAchievementManager(const UDiscordCore* DiscordCore) {
    return NULL;
}

int32 UDiscordAchievementManager::CountUserAchievements() const {
    return 0;
}


