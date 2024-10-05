#include "DiscordVoiceManager.h"

UDiscordVoiceManager::UDiscordVoiceManager() {
}

void UDiscordVoiceManager::SetSelfMute(const bool bMute) {
}

void UDiscordVoiceManager::SetSelfDeaf(const bool bDeaf) {
}

void UDiscordVoiceManager::SetLocalVolume(const int64 UserId, const uint8 Volume) {
}

void UDiscordVoiceManager::SetLocalMute(const int64 UserId, const bool bMute) {
}

void UDiscordVoiceManager::OnVoiceSettingsUpdateInternal() {
}

bool UDiscordVoiceManager::IsSelfMute() {
    return false;
}

bool UDiscordVoiceManager::IsSelfDeaf() {
    return false;
}

bool UDiscordVoiceManager::IsLocalMute(const int64 UserId) {
    return false;
}

UDiscordVoiceManager* UDiscordVoiceManager::GetVoiceManager(UDiscordCore* DiscordCore) {
    return NULL;
}

uint8 UDiscordVoiceManager::GetLocalVolume(const int64 UserId) {
    return 0;
}

FDiscordInputMode UDiscordVoiceManager::GetInputMode() {
    return FDiscordInputMode{};
}


