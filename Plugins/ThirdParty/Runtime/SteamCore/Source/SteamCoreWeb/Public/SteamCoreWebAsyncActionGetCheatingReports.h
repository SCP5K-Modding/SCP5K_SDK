#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetCheatingReports.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetCheatingReports;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetCheatingReports();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, int32 timeEnd, int32 timeBegin, const FString& reportidMin, bool bIncludeReports, bool bIncludeBans, const FString& SteamID);
    
};

