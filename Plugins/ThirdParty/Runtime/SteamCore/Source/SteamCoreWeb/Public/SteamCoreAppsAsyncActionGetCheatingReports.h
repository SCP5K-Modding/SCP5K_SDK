#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreAppsAsyncActionGetCheatingReports.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetCheatingReports;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreAppsAsyncActionGetCheatingReports();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 timeBegin, int32 timeEnd, bool bIncludeReports, bool bIncludeBans, int32 reportidMin);
    
};

