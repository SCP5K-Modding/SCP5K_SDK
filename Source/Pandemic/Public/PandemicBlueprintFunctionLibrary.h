#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameActionContainer.h"
#include "Date.h"
#include "EVoteType.h"
#include "EnvironmentLightSettings.h"
#include "EnvironmentTimeSettings.h"
#include "EnvironmentWeatherSettings.h"
#include "PlayerBan.h"
#include "PlayerID.h"
#include "PlayerReport.h"
#include "UniqueVote.h"
#include "Vote.h"
#include "PandemicBlueprintFunctionLibrary.generated.h"

class AActor;
class APlayerState;
class UObject;

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPandemicBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> SortStringArray(TArray<FString> StringArray);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> SortIntArray(TArray<int32> IntArray);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntByString(UObject* Object, const FString& VariableName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatByString(UObject* Object, const FString& VariableName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolByString(UObject* Object, const FString& VariableName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveVote(FVote Vote, FUniqueNetIdRepl PlayerID);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFile(const FString& Filename, bool& Found);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> PlayerReportToString(FPlayerReport Report);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString PlayerIDToString(FPlayerID ID);
    
    UFUNCTION(BlueprintCallable)
    static FString PasteFromClipboard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEnvironmentWeatherSettings Multiply_EnvironmentWeatherSettings(const FEnvironmentWeatherSettings& A, const FEnvironmentWeatherSettings& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEnvironmentLightSettings Multiply_EnvironmentLightSettings(const FEnvironmentLightSettings& A, const FEnvironmentLightSettings& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVote MakeVote(EVoteType InVoteType, TArray<FString> InOptions, float InRequiredPercentage, int32 InParticipants, int32 Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueVote MakeUniqueVoteInt(FUniqueNetIdRepl PlayerID, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueVote MakeUniqueVoteBool(FUniqueNetIdRepl PlayerID, bool Value);
    
    UFUNCTION(BlueprintPure)
    static FPlayerReport MakePlayerReport(APlayerState* Sender, APlayerState* Subject, uint8 Type, const FString& Description, int64 Timestamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerID MakePlayerIDFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerID MakePlayerIDFromIDAndName(const FString& ID, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerID MakePlayerID(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDate MakeDateFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDate MakeDate(int32 Year, int32 Month, int32 Day);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerBan MakeBanFromString(const FString& String);
    
private:
    UFUNCTION(BlueprintCallable)
    static int32 LevelToExp(int32 Level);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEnvironmentWeatherSettings Lerp_EnvironmentWeatherSettings(const FEnvironmentWeatherSettings& A, const FEnvironmentWeatherSettings& B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEnvironmentTimeSettings Lerp_EnvironmentTimeSettings(const FEnvironmentTimeSettings& A, const FEnvironmentTimeSettings& B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEnvironmentLightSettings Lerp_EnvironmentLightSettings(const FEnvironmentLightSettings& A, const FEnvironmentLightSettings& B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoteComplete(const FVote& Vote);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBanValid(FPlayerBan Ban);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void HostCurrentWorld(UObject* WorldContextObject, const FString& LevelName, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static FColor HexToColour(const FString& HexString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVoteResult(const FVote& Vote, int32& VoteCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSunElevationAndAzimuth(const FEnvironmentTimeSettings& TimeSettings, float& Elevation, float& Azimuth);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRequiredExpForLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLevelByExp(int32 Experience);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatByString(UObject* Object, const FString& VariableName, bool& Found);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetExpNeededForNextLevel(int32 CurrentExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBoolByString(UObject* Object, const FString& VariableName, bool& Found);
    
private:
    UFUNCTION(BlueprintCallable)
    static int32 ExpToLevel(int32 Exp);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteGameAction(const FGameActionContainer& GameAction, UObject* WorldContextObject, AActor* Subject, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString DateToString(FDate Date);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CreateBit(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static FString ColourToHex(FColor Colour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BanToString(FPlayerBan Ban);
    
    UFUNCTION(BlueprintCallable)
    static bool AddVote(FVote Vote, FUniqueVote NewVote);
    
};

