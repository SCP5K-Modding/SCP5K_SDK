#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FindSessionsCallbackProxy.h"
#include "EBlueprintMessageSeverity.h"
#include "Templates/SubclassOf.h"
#include "ConfiguratorLibrary.generated.h"

class AActor;
class ACharacter;
class AGameModeBase;
class AGameStateBase;
class APlayerController;
class AWorldSettings;
class UDirectionalLightComponent;
class UGameInstance;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UPrimitiveComponent;
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
    static void SetRenderInDepthPass(UPrimitiveComponent* PrimitiveComponent, bool bRenderInDepthPass);
    
    UFUNCTION(BlueprintCallable)
    static void SetDirectionalLightAngle(UDirectionalLightComponent* Light, float SourceAngle, float SoftSourceAngle);
    
    UFUNCTION(BlueprintCallable)
    static void SetCrashData(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SetBit(bool bValue, int32& Mask, int32 MaskValue);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMaterials(UMeshComponent* MeshComponent);
    
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
    
    UFUNCTION(BlueprintCallable)
    static FName GetUniqueObjectName(UObject* Object, UClass* Class, FName BaseName);
    
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
    static FString GetMapName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetLocalIP(UObject* WorldContextObject, int32& Port);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameStateBase* GetGameState(UObject* WorldContextObject, TSubclassOf<AGameStateBase> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGameModeBase* GetGameMode(UObject* WorldContextObject, TSubclassOf<AGameModeBase> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameInstance* GetGameInstance(UObject* WorldContextObject, TSubclassOf<UGameInstance> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetFirstLocalPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetEditorLevelName(UObject* WorldContextObject);
    
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
    static UClass* GetClassFromBlueprintAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFindFloorResult GetCharacterKnownFloor(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBuildID();
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindContainingVolume(AActor* Actor, const TArray<AActor*>& Volumes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsBitIndex(int32 Mask, int32 MaskValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsBit(int32 Mask, int32 MaskValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftRight(int32 Original, int32 Shift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftLeft(int32 Original, int32 Shift);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyTextureCompressionSettings(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMaterialOverrides(UMeshComponent* MeshComponent, const TArray<TSoftObjectPtr<UMaterialInterface>>& Overrides);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetween(float From, float To);
    
    UFUNCTION(BlueprintCallable)
    static void AddToMessageLog(UObject* Object, EBlueprintMessageSeverity Severity, const FString& Message);
    
};

