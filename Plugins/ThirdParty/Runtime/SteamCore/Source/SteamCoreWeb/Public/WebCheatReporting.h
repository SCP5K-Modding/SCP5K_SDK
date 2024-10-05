#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebCheatReporting.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebCheatReporting : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebCheatReporting();

    UFUNCTION(BlueprintCallable)
    void StartSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void RequestVacStatusForUser(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& reportID, const FString& cheatDescription, int32 Duration, bool bDelayBan);
    
    UFUNCTION(BlueprintCallable)
    void ReportPlayerCheating(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& steamIDReporter, const FString& appData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 suspicionStartTime, int32 Severity);
    
    UFUNCTION(BlueprintCallable)
    void ReportCheatData(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& pathAndFileName, const FString& webCheatURL, const FString& timeNow, const FString& timeStarted, const FString& timeStopped, const FString& cheatName, int32 gameProcessID, int32 cheatProcessID, const FString& cheatParam1, const FString& cheatParam2);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerGameBan(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetCheatingReports(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 timeEnd, int32 timeBegin, const FString& reportidMin, bool bIncludeReports, bool bIncludeBans, const FString& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void EndSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID, const FString& SessionID);
    
};

