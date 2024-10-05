#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPopular.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetPopular;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPopular();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetPopular* GetPopularAsync(UObject* WorldContextObject, const FString& Key, const FString& Language, int32 rows, int32 Start, int32 filterAppID, int32 eCurrency);
    
};

