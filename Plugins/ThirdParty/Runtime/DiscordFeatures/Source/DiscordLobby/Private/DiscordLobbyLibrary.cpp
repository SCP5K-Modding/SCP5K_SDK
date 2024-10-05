#include "DiscordLobbyLibrary.h"

UDiscordLobbyLibrary::UDiscordLobbyLibrary() {
}

FDiscordLobbySearchQuery UDiscordLobbyLibrary::Sort(FDiscordLobbySearchQuery& SearchQuery, const FString& Key, const EDiscordLobbySearchCast Cast, const FString& Value) {
    return FDiscordLobbySearchQuery{};
}

FDiscordLobbyTransaction UDiscordLobbyLibrary::SetType(FDiscordLobbyTransaction& Transaction, const EDiscordLobbyType Type) {
    return FDiscordLobbyTransaction{};
}

FDiscordLobbyTransaction UDiscordLobbyLibrary::SetOwner(FDiscordLobbyTransaction& Transaction, const int64 UserId) {
    return FDiscordLobbyTransaction{};
}

FDiscordLobbyTransaction UDiscordLobbyLibrary::SetMetadata(FDiscordLobbyTransaction& Transaction, const FString& Key, const FString& Value) {
    return FDiscordLobbyTransaction{};
}

FDiscordLobbyTransaction UDiscordLobbyLibrary::SetLocked(FDiscordLobbyTransaction& Transaction, const bool bLocked) {
    return FDiscordLobbyTransaction{};
}

FDiscordLobbyTransaction UDiscordLobbyLibrary::SetLobbyTransactionProperties(FDiscordLobbyTransaction& Transaction, const EDiscordLobbyType Type, const TMap<FString, FString> MetaData, const int64 UserId, const int64 Capacity, const bool bLocked) {
    return FDiscordLobbyTransaction{};
}

FDiscordLobbyTransaction UDiscordLobbyLibrary::SetCapacity(FDiscordLobbyTransaction& Transaction, const int64 Capacity) {
    return FDiscordLobbyTransaction{};
}

FDiscordLobbyMemberTransaction UDiscordLobbyLibrary::Member_SetMetadata(FDiscordLobbyMemberTransaction& Transaction, const FString& Key, const FString& Value) {
    return FDiscordLobbyMemberTransaction{};
}

FDiscordLobbyMemberTransaction UDiscordLobbyLibrary::Member_DeleteMetadata(FDiscordLobbyMemberTransaction& Transaction, const FString& Key) {
    return FDiscordLobbyMemberTransaction{};
}

FDiscordLobbySearchQuery UDiscordLobbyLibrary::Limit(FDiscordLobbySearchQuery& SearchQuery, const int64 NewLimit) {
    return FDiscordLobbySearchQuery{};
}

FDiscordLobbySearchQuery UDiscordLobbyLibrary::Filter(FDiscordLobbySearchQuery& SearchQuery, const FString& Key, const EDiscordLobbySearchComparison Comparison, const EDiscordLobbySearchCast Cast, const FString& Value) {
    return FDiscordLobbySearchQuery{};
}

FDiscordLobbySearchQuery UDiscordLobbyLibrary::Distance(FDiscordLobbySearchQuery& SearchQuery, const EDiscordLobbySearchDistance NewDistance) {
    return FDiscordLobbySearchQuery{};
}

FDiscordLobbyTransaction UDiscordLobbyLibrary::DeleteMetadata(FDiscordLobbyTransaction& Transaction, const FString& Key) {
    return FDiscordLobbyTransaction{};
}


