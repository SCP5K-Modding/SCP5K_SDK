#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FindSessionsCallbackProxy.h"
#include "Templates/SubclassOf.h"
#include "ConfiguratorLibrary.generated.h"

class AGameModeBase;
class AGameStateBase;
class AWorldSettings;
class UDirectionalLightComponent;
class UGameInstance;
class UObject;
class UReflectionCaptureComponent;
class UTexture2D;

UCLASS(Blueprintable)
class CONFIGURATOR_API UConfiguratorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConfiguratorLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WriteText(const FString& Path, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteLines(const FString& Path, TArray<FString> Lines);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateReflectionCapture(UReflectionCaptureComponent* Reflection);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateDirtyReflectionCaptures();
    
    UFUNCTION(BlueprintPure)
    static int64 ToUnixTimestamp(FDateTime InTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetDirectionalLightAngle(UDirectionalLightComponent* Light, float SourceAngle, float SoftSourceAngle);
    
    UFUNCTION(BlueprintCallable)
    static void SetCrashData(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigString(const FString& Filename, const FString& Section, const FString& Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigInt(const FString& Filename, const FString& Section, const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigFloat(const FString& Filename, const FString& Section, const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigBool(const FString& Filename, const FString& Section, const FString& Name, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SetBit(bool bValue, int32& Mask, int32 MaskValue);
    
    UFUNCTION(BlueprintCallable)
    static void SaveObjectConfig(UObject* Object, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void SaveDefaultObjectConfig(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void SaveConfigFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void ReloadObjectConfig(UObject* Object, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void ReloadDefaultObjectConfig(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadText(const FString& Path, FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadLines(const FString& Path, TArray<FString>& Lines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> ParseIntoArrayWithQuotes(const FString& Text, const FString& Delimiter, bool& bHasSplit, bool bRemoveQuotes);
    
    UFUNCTION(BlueprintCallable)
    static void LogWarning(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void LogText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void LogError(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void LoadObjectConfig(UObject* Object, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void LoadDefaultObjectConfig(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadConfigFile(const FString& Filename, FString& FinalIniFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldValid(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValidAndHasWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGameWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasConsoleArgument(const FString& Argument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AWorldSettings* GetWorldSettings(UObject* WorldContextObject, TSubclassOf<AWorldSettings> SettingsClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUniqueIDAsString(FUniqueNetIdRepl ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSteamQueryPort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSessionOwningID(const FBlueprintSessionResult& Session);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSecondsInDay(FDateTime InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRHIName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectSettingsString(const FString& Name, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProjectSettingsInt(const FString& Name, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProjectSettingsFloat(const FString& Name, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetProjectSettingsBool(const FString& Name, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetProjectDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetNetworkURL(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetLocalIP(UObject* WorldContextObject, int32& Port);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGlobalUserObjectConfigFilename(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameStateBase* GetGameState(UObject* WorldContextObject, TSubclassOf<AGameStateBase> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameModeBase* GetGameMode(UObject* WorldContextObject, TSubclassOf<AGameModeBase> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameInstance* GetGameInstance(UObject* WorldContextObject, TSubclassOf<UGameInstance> Class);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetEditorLevelName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDefaultObjectConfigFilename(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetCurrentSessionOwningID(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetCurrentLevelName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetConsoleStringArgument(const FString& Argument, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetConsoleIntArgument(const FString& Argument, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetConsoleFloatArgument(const FString& Argument, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetConsoleBoolArgument(const FString& Argument, bool& HasArgument);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetConnectedSessionIP(UObject* WorldContextObject, int32& Port);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetConnectedIP(UObject* WorldContextObject, int32& Port);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetConfigString(const FString& Filename, const FString& Section, const FString& Name, bool& HasValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetConfigPath(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetConfigInt(const FString& Filename, const FString& Section, const FString& Name, bool& HasValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetConfigFloat(const FString& Filename, const FString& Section, const FString& Name, bool& HasValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetConfigBool(const FString& Filename, const FString& Section, const FString& Name, bool& HasValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBuildID();
    
    UFUNCTION(BlueprintCallable)
    static bool DefaultConfigFileExists(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsBitIndex(int32 Mask, int32 MaskValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsBit(int32 Mask, int32 MaskValue);
    
    UFUNCTION(BlueprintCallable)
    static bool ConfigFileExists(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftRight(int32 Original, int32 Shift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftLeft(int32 Original, int32 Shift);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyTextureCompressionSettings(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetween(float From, float To);
    
};

