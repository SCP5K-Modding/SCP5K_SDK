#include "PandemicBlueprintFunctionLibrary.h"

UPandemicBlueprintFunctionLibrary::UPandemicBlueprintFunctionLibrary() {
}

void UPandemicBlueprintFunctionLibrary::StopLoadingScreen() {
}

TArray<FString> UPandemicBlueprintFunctionLibrary::SortStringArray(TArray<FString> StringArray) {
    return TArray<FString>();
}

TArray<int32> UPandemicBlueprintFunctionLibrary::SortIntArray(TArray<int32> IntArray) {
    return TArray<int32>();
}

void UPandemicBlueprintFunctionLibrary::SetIntByString(UObject* Object, const FString& VariableName, int32 Value) {
}

void UPandemicBlueprintFunctionLibrary::SetFloatByString(UObject* Object, const FString& VariableName, float Value) {
}

void UPandemicBlueprintFunctionLibrary::SetBoolByString(UObject* Object, const FString& VariableName, bool Value) {
}

bool UPandemicBlueprintFunctionLibrary::RemoveVote(FVote Vote, FUniqueNetIdRepl PlayerID) {
    return false;
}

void UPandemicBlueprintFunctionLibrary::RemoveFile(const FString& Filename, bool& Found) {
}

TArray<FString> UPandemicBlueprintFunctionLibrary::PlayerReportToString(FPlayerReport Report) {
    return TArray<FString>();
}

FString UPandemicBlueprintFunctionLibrary::PlayerIDToString(FPlayerID ID) {
    return TEXT("");
}

FString UPandemicBlueprintFunctionLibrary::PasteFromClipboard() {
    return TEXT("");
}

FEnvironmentWeatherSettings UPandemicBlueprintFunctionLibrary::Multiply_EnvironmentWeatherSettings(const FEnvironmentWeatherSettings& A, const FEnvironmentWeatherSettings& B) {
    return FEnvironmentWeatherSettings{};
}

FEnvironmentLightSettings UPandemicBlueprintFunctionLibrary::Multiply_EnvironmentLightSettings(const FEnvironmentLightSettings& A, const FEnvironmentLightSettings& B) {
    return FEnvironmentLightSettings{};
}

FVote UPandemicBlueprintFunctionLibrary::MakeVote(EVoteType InVoteType, TArray<FString> InOptions, float InRequiredPercentage, int32 InParticipants, int32 Duration) {
    return FVote{};
}

FUniqueVote UPandemicBlueprintFunctionLibrary::MakeUniqueVoteInt(FUniqueNetIdRepl PlayerID, int32 Value) {
    return FUniqueVote{};
}

FUniqueVote UPandemicBlueprintFunctionLibrary::MakeUniqueVoteBool(FUniqueNetIdRepl PlayerID, bool Value) {
    return FUniqueVote{};
}

FPlayerReport UPandemicBlueprintFunctionLibrary::MakePlayerReport(APlayerState* Sender, APlayerState* Subject, uint8 Type, const FString& Description, int64 Timestamp) {
    return FPlayerReport{};
}

FPlayerID UPandemicBlueprintFunctionLibrary::MakePlayerIDFromString(const FString& String) {
    return FPlayerID{};
}

FPlayerID UPandemicBlueprintFunctionLibrary::MakePlayerIDFromIDAndName(const FString& ID, const FString& Name) {
    return FPlayerID{};
}

FPlayerID UPandemicBlueprintFunctionLibrary::MakePlayerID(APlayerState* Player) {
    return FPlayerID{};
}

FDate UPandemicBlueprintFunctionLibrary::MakeDateFromString(const FString& String) {
    return FDate{};
}

FDate UPandemicBlueprintFunctionLibrary::MakeDate(int32 Year, int32 Month, int32 Day) {
    return FDate{};
}

FPlayerBan UPandemicBlueprintFunctionLibrary::MakeBanFromString(const FString& String) {
    return FPlayerBan{};
}

int32 UPandemicBlueprintFunctionLibrary::LevelToExp(int32 Level) {
    return 0;
}

FEnvironmentWeatherSettings UPandemicBlueprintFunctionLibrary::Lerp_EnvironmentWeatherSettings(const FEnvironmentWeatherSettings& A, const FEnvironmentWeatherSettings& B, float Alpha) {
    return FEnvironmentWeatherSettings{};
}

FEnvironmentTimeSettings UPandemicBlueprintFunctionLibrary::Lerp_EnvironmentTimeSettings(const FEnvironmentTimeSettings& A, const FEnvironmentTimeSettings& B, float Alpha) {
    return FEnvironmentTimeSettings{};
}

FEnvironmentLightSettings UPandemicBlueprintFunctionLibrary::Lerp_EnvironmentLightSettings(const FEnvironmentLightSettings& A, const FEnvironmentLightSettings& B, float Alpha) {
    return FEnvironmentLightSettings{};
}

bool UPandemicBlueprintFunctionLibrary::IsVoteComplete(const FVote& Vote) {
    return false;
}

bool UPandemicBlueprintFunctionLibrary::IsBanValid(FPlayerBan Ban) {
    return false;
}

void UPandemicBlueprintFunctionLibrary::HostCurrentWorld(UObject* WorldContextObject, const FString& LevelName, bool& Success) {
}

FColor UPandemicBlueprintFunctionLibrary::HexToColour(const FString& HexString) {
    return FColor{};
}

int32 UPandemicBlueprintFunctionLibrary::GetVoteResult(const FVote& Vote, int32& VoteCount) {
    return 0;
}

void UPandemicBlueprintFunctionLibrary::GetSunElevationAndAzimuth(const FEnvironmentTimeSettings& TimeSettings, float& Elevation, float& Azimuth) {
}

int32 UPandemicBlueprintFunctionLibrary::GetRequiredExpForLevel(int32 Level) {
    return 0;
}

int32 UPandemicBlueprintFunctionLibrary::GetLevelByExp(int32 Experience) {
    return 0;
}

float UPandemicBlueprintFunctionLibrary::GetFloatByString(UObject* Object, const FString& VariableName, bool& Found) {
    return 0.0f;
}

int32 UPandemicBlueprintFunctionLibrary::GetExpNeededForNextLevel(int32 CurrentExp) {
    return 0;
}

bool UPandemicBlueprintFunctionLibrary::GetBoolByString(UObject* Object, const FString& VariableName, bool& Found) {
    return false;
}

int32 UPandemicBlueprintFunctionLibrary::ExpToLevel(int32 Exp) {
    return 0;
}

void UPandemicBlueprintFunctionLibrary::ExecuteGameAction(const FGameActionContainer& GameAction, UObject* WorldContextObject, AActor* Subject, AActor* Instigator) {
}

FString UPandemicBlueprintFunctionLibrary::DateToString(FDate Date) {
    return TEXT("");
}

int32 UPandemicBlueprintFunctionLibrary::CreateBit(int32 Index) {
    return 0;
}

void UPandemicBlueprintFunctionLibrary::CopyToClipboard(const FString& Text) {
}

FString UPandemicBlueprintFunctionLibrary::ColourToHex(FColor Colour) {
    return TEXT("");
}

FString UPandemicBlueprintFunctionLibrary::BanToString(FPlayerBan Ban) {
    return TEXT("");
}

bool UPandemicBlueprintFunctionLibrary::AddVote(FVote Vote, FUniqueVote NewVote) {
    return false;
}


