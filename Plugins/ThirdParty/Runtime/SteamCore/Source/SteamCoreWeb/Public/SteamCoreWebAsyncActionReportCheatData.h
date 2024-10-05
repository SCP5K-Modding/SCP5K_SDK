#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionReportCheatData.generated.h"

class UObject;
class USteamCoreWebAsyncActionReportCheatData;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionReportCheatData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& pathAndFileName, const FString& webCheatURL, const FString& timeNow, const FString& timeStarted, const FString& timeStopped, const FString& cheatName, int32 gameProcessID, int32 cheatProcessID, const FString& cheatParam1, const FString& cheatParam2);
    
};

