#include "ConfiguratorUtilityLibrary.h"

UConfiguratorUtilityLibrary::UConfiguratorUtilityLibrary() {
}

bool UConfiguratorUtilityLibrary::GetJsonObjectString(const FBPJsonValue& Json, const FString& Key, FString& Value) {
    return false;
}

bool UConfiguratorUtilityLibrary::GetJsonObjectInt64(const FBPJsonValue& Json, const FString& Key, int64& Value) {
    return false;
}

bool UConfiguratorUtilityLibrary::GetJsonObjectInt(const FBPJsonValue& Json, const FString& Key, int32& Value) {
    return false;
}

bool UConfiguratorUtilityLibrary::GetJsonObjectField(const FBPJsonValue& Json, const FString& Key, FBPJsonValue& Value) {
    return false;
}

bool UConfiguratorUtilityLibrary::GetJsonObjectBool(const FBPJsonValue& Json, const FString& Key, bool& Value) {
    return false;
}

bool UConfiguratorUtilityLibrary::GetJsonObjectArray(const FBPJsonValue& Json, const FString& Key, TArray<FBPJsonValue>& Value) {
    return false;
}

bool UConfiguratorUtilityLibrary::GetJsonField(const FString& Json, const FString& Key, FBPJsonValue& Value) {
    return false;
}

bool UConfiguratorUtilityLibrary::GetJsonArray(const FString& Json, const FString& Key, TArray<FBPJsonValue>& Value) {
    return false;
}


