#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebSteamCommunity.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamCommunity : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamCommunity();

    UFUNCTION(BlueprintCallable)
    void ReportAbuse(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& steamIDActor, const FString& steamIDTarget, int32 AppID, int32 abuseType, int32 contentType, const FString& Description, const FString& gid);
    
};

