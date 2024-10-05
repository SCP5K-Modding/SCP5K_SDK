#include "DiscordStorageManager.h"

UDiscordStorageManager::UDiscordStorageManager() {
}

void UDiscordStorageManager::Write(const FString& Name, TArray<uint8>& Data) {
}

FDiscordFileStat UDiscordStorageManager::StatAt(const int32 Index) {
    return FDiscordFileStat{};
}

FDiscordFileStat UDiscordStorageManager::Stat(const FString& Name) {
    return FDiscordFileStat{};
}

int32 UDiscordStorageManager::Read(const FString& Name, TArray<uint8>& Buffer) {
    return 0;
}

UDiscordStorageManager* UDiscordStorageManager::GetStorageManager(const UDiscordCore* DiscordCore) {
    return NULL;
}

FString UDiscordStorageManager::GetPath() {
    return TEXT("");
}

bool UDiscordStorageManager::Exists(const FString& Name) {
    return false;
}

void UDiscordStorageManager::Delete(const FString& Name) {
}

int32 UDiscordStorageManager::Count() {
    return 0;
}


