#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "OnActivityInviteDelegate.h"
#include "OnActivityJoinDelegate.h"
#include "OnActivityJoinRequestDelegate.h"
#include "OnActivitySpectateDelegate.h"
#include "DiscordActivityManager.generated.h"

class UDiscordActivityManager;
class UDiscordCore;

UCLASS(Blueprintable)
class DISCORDACTIVITY_API UDiscordActivityManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityJoin OnActivityJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivitySpectate OnActivitySpectate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityJoinRequest OnActivityJoinRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityInvite OnActivityInvite;
    
    UDiscordActivityManager();

    UFUNCTION(BlueprintCallable)
    void RegisterSteam(const int64 SteamID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordActivityManager* GetActivityManager(UDiscordCore* DiscordCore);
    
};

