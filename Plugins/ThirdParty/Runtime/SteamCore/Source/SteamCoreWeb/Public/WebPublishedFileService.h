#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebPublishedFileService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebPublishedFileService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebPublishedFileService();

    UFUNCTION(BlueprintCallable)
    void UpdateTags(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, const FString& addTags, const FString& removeTags);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIncompatibleStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, bool bIncompatible);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBanStatus(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, bool bBanned, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetDeveloperMetadata(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& PublishedFileID, int32 AppID, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    void QueryFiles(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 QueryType, int32 Page, const FString& Cursor, int32 numPerPage, int32 CreatorAppID, int32 AppID, const FString& requiredTags, const FString& excludedTags, bool bMatchAllTags, const FString& requiredFlags, const FString& omittedFlags, const FString& SearchText, int32 FileType, const FString& ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 cacheMaxAgeSeconds, int32 Language, const FString& requiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32 returnPlaytimeStats);
    
};

