#include "ConfiguratorLibrary.h"
#include "Templates/SubclassOf.h"

UConfiguratorLibrary::UConfiguratorLibrary() {
}

bool UConfiguratorLibrary::WriteText(const FString& Path, const FString& Text) {
    return false;
}

bool UConfiguratorLibrary::WriteLines(const FString& Path, TArray<FString> Lines) {
    return false;
}

void UConfiguratorLibrary::UpdateReflectionCapture(UReflectionCaptureComponent* Reflection) {
}

void UConfiguratorLibrary::UpdateDirtyReflectionCaptures() {
}

int64 UConfiguratorLibrary::ToUnixTimestamp(FDateTime InTime) {
    return 0;
}

void UConfiguratorLibrary::SetRenderInDepthPass(UPrimitiveComponent* PrimitiveComponent, bool bRenderInDepthPass) {
}

void UConfiguratorLibrary::SetDirectionalLightAngle(UDirectionalLightComponent* Light, float SourceAngle, float SoftSourceAngle) {
}

void UConfiguratorLibrary::SetCrashData(const FString& Key, const FString& Value) {
}

void UConfiguratorLibrary::SetBit(bool bValue, int32& Mask, int32 MaskValue) {
}

void UConfiguratorLibrary::ResetMaterials(UMeshComponent* MeshComponent) {
}

bool UConfiguratorLibrary::ReadText(const FString& Path, FString& Text) {
    return false;
}

bool UConfiguratorLibrary::ReadLines(const FString& Path, TArray<FString>& Lines) {
    return false;
}

TArray<FString> UConfiguratorLibrary::ParseIntoArrayWithQuotes(const FString& Text, const FString& Delimiter, bool& bHasSplit, bool bRemoveQuotes) {
    return TArray<FString>();
}

void UConfiguratorLibrary::LogWarning(const FString& Text) {
}

void UConfiguratorLibrary::LogText(const FString& Text) {
}

void UConfiguratorLibrary::LogError(const FString& Text) {
}

bool UConfiguratorLibrary::IsWorldValid(UObject* WorldContextObject) {
    return false;
}

bool UConfiguratorLibrary::IsValidAndHasWorld(UObject* WorldContextObject) {
    return false;
}

bool UConfiguratorLibrary::IsGameWorld(UObject* WorldContextObject) {
    return false;
}

bool UConfiguratorLibrary::HasConsoleArgument(const FString& Argument) {
    return false;
}

AWorldSettings* UConfiguratorLibrary::GetWorldSettings(UObject* WorldContextObject, TSubclassOf<AWorldSettings> SettingsClass) {
    return NULL;
}

FName UConfiguratorLibrary::GetUniqueObjectName(UObject* Object, UClass* Class, FName BaseName) {
    return NAME_None;
}

FString UConfiguratorLibrary::GetUniqueIDAsString(FUniqueNetIdRepl ID) {
    return TEXT("");
}

int32 UConfiguratorLibrary::GetSteamQueryPort() {
    return 0;
}

FString UConfiguratorLibrary::GetSessionOwningID(const FBlueprintSessionResult& Session) {
    return TEXT("");
}

int32 UConfiguratorLibrary::GetSecondsInDay(FDateTime InTime) {
    return 0;
}

FString UConfiguratorLibrary::GetRHIName() {
    return TEXT("");
}

FString UConfiguratorLibrary::GetProjectVersion() {
    return TEXT("");
}

FString UConfiguratorLibrary::GetProjectSettingsString(const FString& Name, bool& HasArgument) {
    return TEXT("");
}

int32 UConfiguratorLibrary::GetProjectSettingsInt(const FString& Name, bool& HasArgument) {
    return 0;
}

float UConfiguratorLibrary::GetProjectSettingsFloat(const FString& Name, bool& HasArgument) {
    return 0.0f;
}

bool UConfiguratorLibrary::GetProjectSettingsBool(const FString& Name, bool& HasArgument) {
    return false;
}

FText UConfiguratorLibrary::GetProjectDisplayName() {
    return FText::GetEmpty();
}

FString UConfiguratorLibrary::GetNetworkURL(UObject* WorldContextObject) {
    return TEXT("");
}

FString UConfiguratorLibrary::GetMapName(UObject* WorldContextObject) {
    return TEXT("");
}

FString UConfiguratorLibrary::GetLocalIP(UObject* WorldContextObject, int32& Port) {
    return TEXT("");
}

AGameStateBase* UConfiguratorLibrary::GetGameState(UObject* WorldContextObject, TSubclassOf<AGameStateBase> Class) {
    return NULL;
}

AGameModeBase* UConfiguratorLibrary::GetGameMode(UObject* WorldContextObject, TSubclassOf<AGameModeBase> Class) {
    return NULL;
}

UGameInstance* UConfiguratorLibrary::GetGameInstance(UObject* WorldContextObject, TSubclassOf<UGameInstance> Class) {
    return NULL;
}

APlayerController* UConfiguratorLibrary::GetFirstLocalPlayerController(UObject* WorldContextObject) {
    return NULL;
}

FString UConfiguratorLibrary::GetEditorLevelName(UObject* WorldContextObject) {
    return TEXT("");
}

FString UConfiguratorLibrary::GetCurrentSessionOwningID(UObject* WorldContextObject) {
    return TEXT("");
}

FString UConfiguratorLibrary::GetCurrentLevelName(UObject* WorldContextObject) {
    return TEXT("");
}

FString UConfiguratorLibrary::GetConsoleStringArgument(const FString& Argument, bool& HasArgument) {
    return TEXT("");
}

int32 UConfiguratorLibrary::GetConsoleIntArgument(const FString& Argument, bool& HasArgument) {
    return 0;
}

float UConfiguratorLibrary::GetConsoleFloatArgument(const FString& Argument, bool& HasArgument) {
    return 0.0f;
}

bool UConfiguratorLibrary::GetConsoleBoolArgument(const FString& Argument, bool& HasArgument) {
    return false;
}

FString UConfiguratorLibrary::GetConnectedSessionIP(UObject* WorldContextObject, int32& Port) {
    return TEXT("");
}

FString UConfiguratorLibrary::GetConnectedIP(UObject* WorldContextObject, int32& Port) {
    return TEXT("");
}

UClass* UConfiguratorLibrary::GetClassFromBlueprintAsset(UObject* Asset) {
    return NULL;
}

FFindFloorResult UConfiguratorLibrary::GetCharacterKnownFloor(ACharacter* Character) {
    return FFindFloorResult{};
}

int32 UConfiguratorLibrary::GetBuildID() {
    return 0;
}

AActor* UConfiguratorLibrary::FindContainingVolume(AActor* Actor, const TArray<AActor*>& Volumes) {
    return NULL;
}

bool UConfiguratorLibrary::ContainsBitIndex(int32 Mask, int32 MaskValue) {
    return false;
}

bool UConfiguratorLibrary::ContainsBit(int32 Mask, int32 MaskValue) {
    return false;
}

int32 UConfiguratorLibrary::BitShiftRight(int32 Original, int32 Shift) {
    return 0;
}

int32 UConfiguratorLibrary::BitShiftLeft(int32 Original, int32 Shift) {
    return 0;
}

void UConfiguratorLibrary::ApplyTextureCompressionSettings(UTexture2D* Texture) {
}

void UConfiguratorLibrary::ApplyMaterialOverrides(UMeshComponent* MeshComponent, const TArray<TSoftObjectPtr<UMaterialInterface>>& Overrides) {
}

float UConfiguratorLibrary::AngleBetween(float From, float To) {
    return 0.0f;
}

void UConfiguratorLibrary::AddToMessageLog(UObject* Object, EBlueprintMessageSeverity Severity, const FString& Message) {
}


