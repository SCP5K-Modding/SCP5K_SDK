#include "DiscordRelationshipManager.h"

UDiscordRelationshipManager::UDiscordRelationshipManager() {
}

UDiscordRelationshipManager* UDiscordRelationshipManager::GetRelationshipManager(UDiscordCore* DiscordCore) {
    return NULL;
}

FDiscordRelationship UDiscordRelationshipManager::GetAt(const int64 Index) {
    return FDiscordRelationship{};
}

FDiscordRelationship UDiscordRelationshipManager::Get(const int64 UserId) {
    return FDiscordRelationship{};
}

void UDiscordRelationshipManager::Filter(const FDiscordFilterFunction& FilterFunction) {
}

int32 UDiscordRelationshipManager::Count() {
    return 0;
}


