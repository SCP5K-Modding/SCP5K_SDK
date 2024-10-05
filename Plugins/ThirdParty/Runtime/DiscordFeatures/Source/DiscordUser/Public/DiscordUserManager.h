#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "DiscordUser.h"
#include "EDiscordPremiumType.h"
#include "EDiscordUserFlag.h"
#include "OnCurrentUserUpdateEventDelegate.h"
#include "DiscordUserManager.generated.h"

class UDiscordCore;
class UDiscordUserManager;

UCLASS(Blueprintable)
class DISCORDUSER_API UDiscordUserManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentUserUpdateEvent OnCurrentUserUpdate;
    
    UDiscordUserManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordUserManager* GetUserManager(const UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiscordPremiumType GetCurrentUserPremiumType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordUser GetCurrentUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CurrentUserHasFlag(const EDiscordUserFlag Flag);
    
};

