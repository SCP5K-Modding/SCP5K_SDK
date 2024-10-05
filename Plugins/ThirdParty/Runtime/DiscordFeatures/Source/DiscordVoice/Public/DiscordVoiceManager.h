#pragma once
#include "CoreMinimal.h"
#include "DiscordManager.h"
#include "DiscordInputMode.h"
#include "DiscordOnVoiceSettingsUpdateDelegate.h"
#include "DiscordVoiceManager.generated.h"

class UDiscordCore;
class UDiscordVoiceManager;

UCLASS(Blueprintable)
class DISCORDVOICE_API UDiscordVoiceManager : public UDiscordManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnVoiceSettingsUpdate OnVoiceSettingsUpdate;
    
    UDiscordVoiceManager();

    UFUNCTION(BlueprintCallable)
    void SetSelfMute(const bool bMute);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfDeaf(const bool bDeaf);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalVolume(const int64 UserId, const uint8 Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalMute(const int64 UserId, const bool bMute);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVoiceSettingsUpdateInternal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfMute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfDeaf();
    
    UFUNCTION(BlueprintPure)
    bool IsLocalMute(const int64 UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordVoiceManager* GetVoiceManager(UDiscordCore* DiscordCore);
    
    UFUNCTION(BlueprintPure)
    uint8 GetLocalVolume(const int64 UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDiscordInputMode GetInputMode();
    
};

