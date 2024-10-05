#include "DiscordUserManager.h"

UDiscordUserManager::UDiscordUserManager() {
}

UDiscordUserManager* UDiscordUserManager::GetUserManager(const UDiscordCore* DiscordCore) {
    return NULL;
}

EDiscordPremiumType UDiscordUserManager::GetCurrentUserPremiumType() {
    return EDiscordPremiumType::None;
}

FDiscordUser UDiscordUserManager::GetCurrentUser() {
    return FDiscordUser{};
}

bool UDiscordUserManager::CurrentUserHasFlag(const EDiscordUserFlag Flag) {
    return false;
}


