#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordLogEventDelegate.h"
#include "EDiscordCoreCreationFlags.h"
#include "OnRunCallbacksDelegate.h"
#include "Uint64.h"
#include "DiscordCore.generated.h"

class UDiscordCore;
class UDiscordManager;

UCLASS(Blueprintable)
class DISCORDCORE_API UDiscordCore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRunCallbacks OnRunCallbacks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* NetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* ActivityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* ApplicationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* VoiceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* ImageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* LobbyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* OverlayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* RelationshipManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* StorageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* StoreManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordManager* UserManager;
    
public:
    UDiscordCore();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Uint64ToString(const FUint64& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUint64 StringToUint64(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLogHook(const FDiscordLogEvent& OnLogCallback);
    
    UFUNCTION(BlueprintPure)
    static int64 GetTimeSinceEpoch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDiscordCore* CreateDiscordCore(const EDiscordCoreCreationFlags CreationFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUint64 Blueprint_GetApplicationId();
    
};

