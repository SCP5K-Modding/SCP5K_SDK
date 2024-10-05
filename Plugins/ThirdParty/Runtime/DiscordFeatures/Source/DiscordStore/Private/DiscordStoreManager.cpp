#include "DiscordStoreManager.h"

UDiscordStoreManager::UDiscordStoreManager() {
}

bool UDiscordStoreManager::HasSkuEntitlement(const int64 SkuId) {
    return false;
}

UDiscordStoreManager* UDiscordStoreManager::GetStoreManager(const UDiscordCore* DiscordCore) {
    return NULL;
}

FDiscordSku UDiscordStoreManager::GetSkuAt(const int32 Index) {
    return FDiscordSku{};
}

FDiscordSku UDiscordStoreManager::GetSku(const int64 SkuId) {
    return FDiscordSku{};
}

FDiscordEntitlement UDiscordStoreManager::GetEntitlementAt(const int32 Index) {
    return FDiscordEntitlement{};
}

FDiscordEntitlement UDiscordStoreManager::GetEntitlement(const int64 EntitlementId) {
    return FDiscordEntitlement{};
}

int32 UDiscordStoreManager::CountSkus() {
    return 0;
}

int32 UDiscordStoreManager::CountEntitlements() {
    return 0;
}


