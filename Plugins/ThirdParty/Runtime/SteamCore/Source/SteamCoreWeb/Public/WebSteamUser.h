#pragma once
#include "CoreMinimal.h"
#include "EVanityUrlType.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebSteamUser.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamUser : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamUser();

    UFUNCTION(BlueprintCallable)
    void ResolveVanityURL(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& vanityURL, EVanityUrlType urlType);
    
    UFUNCTION(BlueprintCallable)
    void GrantPackage(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 packageID, const FString& ipaddress, const FString& thirdPartyKey, int32 thirdPartyAppID);
    
    UFUNCTION(BlueprintCallable)
    void GetUserGroupList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetPublisherAppOwnershipChanges(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& packageRowVersion, const FString& cdkeyRowVersion);
    
    UFUNCTION(BlueprintCallable)
    void GetPublisherAppOwnership(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerSummaries(const FOnSteamCoreWebCallback& Callback, const FString& Key, TArray<FString> SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerBans(const FOnSteamCoreWebCallback& Callback, const FString& Key, TArray<FString> SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetFriendList(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& Relationship);
    
    UFUNCTION(BlueprintCallable)
    void GetAppPriceInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, TArray<int32> AppIDs);
    
    UFUNCTION(BlueprintCallable)
    void CheckAppOwnership(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
};

