#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConfiguratorConfigLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class CONFIGURATOR_API UConfiguratorConfigLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConfiguratorConfigLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetConfigString(const FString& Filename, const FString& Section, const FString& Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigInt(const FString& Filename, const FString& Section, const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigFloat(const FString& Filename, const FString& Section, const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigBool(const FString& Filename, const FString& Section, const FString& Name, bool Value);
    
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
    static void LoadObjectConfig(UObject* Object, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void LoadDefaultObjectConfig(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadConfigFile(const FString& Filename, FString& FinalIniFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGlobalUserObjectConfigFilename(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDefaultObjectConfigFilename(UObject* Object);
    
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
    
    UFUNCTION(BlueprintCallable)
    static bool DefaultConfigFileExists(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool ConfigFileExists(const FString& Path);
    
};

