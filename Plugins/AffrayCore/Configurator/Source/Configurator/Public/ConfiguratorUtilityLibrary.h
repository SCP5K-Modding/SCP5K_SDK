#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPJsonValue.h"
#include "ConfiguratorUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class CONFIGURATOR_API UConfiguratorUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConfiguratorUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetJsonObjectString(const FBPJsonValue& Json, const FString& Key, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonObjectInt64(const FBPJsonValue& Json, const FString& Key, int64& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonObjectInt(const FBPJsonValue& Json, const FString& Key, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonObjectField(const FBPJsonValue& Json, const FString& Key, FBPJsonValue& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonObjectBool(const FBPJsonValue& Json, const FString& Key, bool& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonObjectArray(const FBPJsonValue& Json, const FString& Key, TArray<FBPJsonValue>& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonField(const FString& Json, const FString& Key, FBPJsonValue& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJsonArray(const FString& Json, const FString& Key, TArray<FBPJsonValue>& Value);
    
};

