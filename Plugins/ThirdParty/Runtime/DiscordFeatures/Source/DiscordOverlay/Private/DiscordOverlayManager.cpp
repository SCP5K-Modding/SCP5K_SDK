#include "DiscordOverlayManager.h"

UDiscordOverlayManager::UDiscordOverlayManager() {
}

bool UDiscordOverlayManager::IsLocked() {
    return false;
}

bool UDiscordOverlayManager::IsEnabled() {
    return false;
}

UDiscordOverlayManager* UDiscordOverlayManager::GetOverlayManager(UDiscordCore* DiscordCore) {
    return NULL;
}


