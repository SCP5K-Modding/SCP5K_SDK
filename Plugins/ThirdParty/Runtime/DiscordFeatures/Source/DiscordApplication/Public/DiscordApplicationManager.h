#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "DiscordApplicationManager.generated.h"

class UDiscordApplicationManager;
class UDiscordCore;

UCLASS(Blueprintable)
class DISCORDAPPLICATION_API UDiscordApplicationManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UDiscordApplicationManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentLocale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentBranch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordApplicationManager* GetApplicationManager(const UDiscordCore* DiscordCore);
    
};

