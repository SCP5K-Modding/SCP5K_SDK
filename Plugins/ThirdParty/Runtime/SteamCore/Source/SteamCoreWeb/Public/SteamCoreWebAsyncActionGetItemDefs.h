#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetItemDefs.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetItemDefs;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetItemDefs();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& modifiedSince, TArray<int32> itemdefIDs, TArray<int32> workshopIDs, int32 cacheMaxAgeSeconds);
    
};

