#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreWebLobbyType.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebLobbyMatchmakingService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebLobbyMatchmakingService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebLobbyMatchmakingService();

    UFUNCTION(BlueprintCallable)
    void RemoveUserFromLobby(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& steamIDToRemove, const FString& SteamIDLobby, const FString& inputJson);
    
    UFUNCTION(BlueprintCallable)
    void CreateLobby(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 MaxMembers, ESteamCoreWebLobbyType LobbyType, const FString& lobbyName, const FString& inputJson, TArray<FString> steamIDInvitedMembers, const FString& lobbyMetaData);
    
};

