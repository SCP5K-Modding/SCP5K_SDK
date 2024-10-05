#include "WebPublishedFileService.h"

UWebPublishedFileService::UWebPublishedFileService() {
}

void UWebPublishedFileService::UpdateTags(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, const FString& addTags, const FString& removeTags) {
}

void UWebPublishedFileService::UpdateIncompatibleStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, bool bIncompatible) {
}

void UWebPublishedFileService::UpdateBanStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, bool bBanned, const FString& Reason) {
}

void UWebPublishedFileService::SetDeveloperMetadata(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, const FString& MetaData) {
}

void UWebPublishedFileService::QueryFiles(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 QueryType, int32 Page, const FString& Cursor, int32 numPerPage, int32 CreatorAppID, int32 AppID, const FString& requiredTags, const FString& excludedTags, bool bMatchAllTags, const FString& requiredFlags, const FString& omittedFlags, const FString& SearchText, int32 FileType, const FString& ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 cacheMaxAgeSeconds, int32 Language, const FString& requiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32 returnPlaytimeStats) {
}


