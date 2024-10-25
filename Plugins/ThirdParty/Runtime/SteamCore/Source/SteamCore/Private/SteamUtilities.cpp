#include "SteamUtilities.h"

USteamUtilities::USteamUtilities() {
}

void USteamUtilities::SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID A, FSteamItemInstanceID B, ESteamCoreIdentical& Result) {
}

bool USteamUtilities::SteamItemInstanceID_Equals(FSteamItemInstanceID A, FSteamItemInstanceID B) {
    return false;
}

void USteamUtilities::ReleaseRequest() {
}

bool USteamUtilities::PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B) {
    return false;
}

void USteamUtilities::PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreIdentical& Result) {
}

bool USteamUtilities::PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B) {
    return false;
}

bool USteamUtilities::NotEqual(FSteamID A, FSteamID B) {
    return false;
}

FSteamUGCHandle USteamUtilities::MakeUGCHandle(const FString& Value) {
    return FSteamUGCHandle{};
}

FSteamTicketHandle USteamUtilities::MakeTicketHandle(const FString& Value) {
    return FSteamTicketHandle{};
}

FSteamSessionSetting USteamUtilities::MakeString(const FString& Value) {
    return FSteamSessionSetting{};
}

FSteamID USteamUtilities::MakeSteamID(const FString& Value) {
    return FSteamID{};
}

FSteamGameID USteamUtilities::MakeSteamGameID(const FString& Value) {
    return FSteamGameID{};
}

FSteamSessionSearchSetting USteamUtilities::MakeSearchString(const FString& Value) {
    return FSteamSessionSearchSetting{};
}

FSteamSessionSearchSetting USteamUtilities::MakeSearchInteger(const ESteamComparisonOp ComparisonOperator, const int32 Value) {
    return FSteamSessionSearchSetting{};
}

FSteamSessionSearchSetting USteamUtilities::MakeSearchBool(const bool bValue) {
    return FSteamSessionSearchSetting{};
}

FPublishedFileID USteamUtilities::MakePublishedFileID(const FString& Value) {
    return FPublishedFileID{};
}

FSteamInventoryUpdateHandle USteamUtilities::MakeInventoryUpdateHandle(const FString& Value) {
    return FSteamInventoryUpdateHandle{};
}

FSteamSessionSetting USteamUtilities::MakeInteger(const int32 Value) {
    return FSteamSessionSetting{};
}

FSteamSessionSetting USteamUtilities::MakeBool(const bool bValue) {
    return FSteamSessionSetting{};
}

void USteamUtilities::ListenForSteamMessages(const FOnSteamMessage& Callback) {
}

bool USteamUtilities::IsValid(FSteamID SteamID) {
    return false;
}

bool USteamUtilities::IsUsingP2PRelays() {
    return false;
}

void USteamUtilities::IsUGCHandleValid_Exec(const FSteamUGCHandle Handle, ESteamCoreValid& Result) {
}

bool USteamUtilities::IsUGCHandleValid(const FSteamUGCHandle Handle) {
    return false;
}

void USteamUtilities::IsSteamTicketHandleValid_Exec(const FSteamTicketHandle Handle, ESteamCoreValid& Result) {
}

bool USteamUtilities::IsSteamTicketHandleValid(const FSteamTicketHandle Handle) {
    return false;
}

void USteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(const FSteamInventoryUpdateHandle Handle, ESteamCoreValid& Result) {
}

bool USteamUtilities::IsSteamInventoryUpdateHandleValid(const FSteamInventoryUpdateHandle Handle) {
    return false;
}

void USteamUtilities::IsSteamIDValid_Exec(const FSteamID SteamID, ESteamCoreValid& Result) {
}

bool USteamUtilities::IsSteamAvailable() {
    return false;
}

bool USteamUtilities::IsRecalculatingPing() {
    return false;
}

void USteamUtilities::IsPublishedFileIDValid_Exec(const FPublishedFileID Handle, ESteamCoreValid& Result) {
}

bool USteamUtilities::IsPublishedFileIDValid(FPublishedFileID PublishedFileID) {
    return false;
}

bool USteamUtilities::IsLobby(FSteamID SteamID) {
    return false;
}

void USteamUtilities::IsGameIDValid_Exec(const FSteamGameID GameID, ESteamCoreValid& Result) {
}

bool USteamUtilities::IsGameIDValid(const FSteamGameID GameID) {
    return false;
}

FString USteamUtilities::GetString(FSteamSessionSetting settings, FString& Key) {
    return TEXT("");
}

FSteamID USteamUtilities::GetSteamIdFromPlayerState(APlayerState* PlayerState) {
    return FSteamID{};
}

void USteamUtilities::GetPublicIp(const FOnHTTPResponse& Callback) {
}

int32 USteamUtilities::GetPingFromHostData(const FHostPingData& Data) {
    return 0;
}

int32 USteamUtilities::GetInteger(FSteamSessionSetting settings, FString& Key) {
    return 0;
}

FHostPingData USteamUtilities::GetHostPingData() {
    return FHostPingData{};
}

bool USteamUtilities::GetBool(FSteamSessionSetting settings, FString& Key) {
    return false;
}

ESteamAccountType USteamUtilities::GetAccountType(FSteamID SteamID) {
    return ESteamAccountType::Invalid;
}

FDateTime USteamUtilities::FromUnixTimestamp(const FString& Timestamp) {
    return FDateTime{};
}

void USteamUtilities::Equal_Exec(FSteamID A, const FSteamID B, ESteamCoreIdentical& Result) {
}

bool USteamUtilities::Equal(FSteamID A, FSteamID B) {
    return false;
}

FString USteamUtilities::EncryptString(const FString& String) {
    return TEXT("");
}

UServerFilter* USteamUtilities::ConstructServerFilter(UObject* WorldContextObject) {
    return NULL;
}

void USteamUtilities::CancelQuery() {
}

FString USteamUtilities::BreakUGCHandle(FSteamUGCHandle Handle) {
    return TEXT("");
}

FString USteamUtilities::BreakTicketHandle(FSteamTicketHandle Handle) {
    return TEXT("");
}

FString USteamUtilities::BreakSteamID(FSteamID SteamID) {
    return TEXT("");
}

FString USteamUtilities::BreakSteamGameID(FSteamGameID SteamID) {
    return TEXT("");
}

FString USteamUtilities::BreakPublishedFileID(FPublishedFileID FileID) {
    return TEXT("");
}

FString USteamUtilities::BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle) {
    return TEXT("");
}

TArray<uint8> USteamUtilities::BP_StringToBytes(const FString& String) {
    return TArray<uint8>();
}

FString USteamUtilities::BP_BytesToString(TArray<uint8> Array) {
    return TEXT("");
}


