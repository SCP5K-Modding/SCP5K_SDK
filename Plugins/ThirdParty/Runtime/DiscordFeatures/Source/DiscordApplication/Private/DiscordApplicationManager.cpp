#include "DiscordApplicationManager.h"

UDiscordApplicationManager::UDiscordApplicationManager() {
}

FString UDiscordApplicationManager::GetCurrentLocale() {
    return TEXT("");
}

FString UDiscordApplicationManager::GetCurrentBranch() {
    return TEXT("");
}

UDiscordApplicationManager* UDiscordApplicationManager::GetApplicationManager(const UDiscordCore* DiscordCore) {
    return NULL;
}


