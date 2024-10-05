#include "DiscordCore.h"

UDiscordCore::UDiscordCore() {
    this->NetworkManager = NULL;
    this->AchievementManager = NULL;
    this->ActivityManager = NULL;
    this->ApplicationManager = NULL;
    this->VoiceManager = NULL;
    this->ImageManager = NULL;
    this->LobbyManager = NULL;
    this->OverlayManager = NULL;
    this->RelationshipManager = NULL;
    this->StorageManager = NULL;
    this->StoreManager = NULL;
    this->UserManager = NULL;
}

FString UDiscordCore::Uint64ToString(const FUint64& Value) {
    return TEXT("");
}

FUint64 UDiscordCore::StringToUint64(const FString& Value) {
    return FUint64{};
}

void UDiscordCore::SetLogHook(const FDiscordLogEvent& OnLogCallback) {
}

int64 UDiscordCore::GetTimeSinceEpoch() {
    return 0;
}

UDiscordCore* UDiscordCore::CreateDiscordCore(const EDiscordCoreCreationFlags CreationFlags) {
    return NULL;
}

FUint64 UDiscordCore::Blueprint_GetApplicationId() {
    return FUint64{};
}


