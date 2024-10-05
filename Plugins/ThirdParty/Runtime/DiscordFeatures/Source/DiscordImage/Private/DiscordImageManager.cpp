#include "DiscordImageManager.h"

UDiscordImageManager::UDiscordImageManager() {
}

UTexture2D* UDiscordImageManager::GetTexture(const FDiscordImageHandle& Handle) {
    return NULL;
}

UDiscordImageManager* UDiscordImageManager::GetImageManager(UDiscordCore* DiscordCore) {
    return NULL;
}

FDiscordImageDimensions UDiscordImageManager::GetDimensions(const FDiscordImageHandle& Handle) {
    return FDiscordImageDimensions{};
}

EDiscordResult UDiscordImageManager::GetData(const FDiscordImageHandle& Handle, TArray<uint8>& OutData) {
    return EDiscordResult::Ok;
}


