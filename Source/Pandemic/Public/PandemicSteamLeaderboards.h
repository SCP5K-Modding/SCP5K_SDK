#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCore -ObjectName=SteamID -FallbackName=SteamID
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCore -ObjectName=SteamLeaderboard -FallbackName=SteamLeaderboard
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCore -ObjectName=SteamLeaderboardEntry -FallbackName=SteamLeaderboardEntry
//#include "SteamLeaderboard.h"
//#include "SteamLeaderboardEntry.h"
#include "EPandemicLeaderboardDataRequest.h"
#include "EPandemicLeaderboardDisplayType.h"
#include "EPandemicLeaderboardSortMethod.h"
#include "LeaderboardDetails.h"
#include "OnEntriesDownloadedDelegateDelegate.h"
#include "OnEntryUploadedDelegateDelegate.h"
#include "OnLeaderboardFoundDelegateDelegate.h"
//#include "SteamID.h"
#include "PandemicSteamLeaderboards.generated.h"

class APandemicGameStateBase;

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicSteamLeaderboards : public UObject {
    GENERATED_BODY()
//public:
//    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnLeaderboardFoundDelegate OnLeaderboardFoundDelegate;
    
 //   UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnEntryUploadedDelegate OnEntryUploadedDelegate;
    
 //   UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnEntriesDownloadedDelegate OnEntriesDownloadedDelegate;
    
    UPandemicSteamLeaderboards();

    UFUNCTION(BlueprintCallable)
    bool UploadEntry(int32 Score, const FLeaderboardDetails& Details);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLeaderboardDetails MakeLeaderboardDetailsFromArray(const TArray<int32>& DataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLeaderboardDetails MakeLeaderboardDetails(int32 NumCompletedChambers, APandemicGameStateBase* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> IntToByteArray(const TArray<int32>& inArray);
    
    // Comment out or remove these functions until SteamCore is re-enabled:
    // UFUNCTION(BlueprintCallable)
    // FString GetLeaderboardName(FSteamLeaderboard InLeaderboard);

    // UFUNCTION(BlueprintCallable)
    // bool GetLeaderboardEntries(TArray<FSteamLeaderboardEntry>& OutLeaderboardEntries);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLeaderboardDetailsPlayerIDs(const FLeaderboardDetails& InLeaderboardDetails);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetLeaderboardDetailsDataArray(const FLeaderboardDetails& InLeaderboardDetails);
    
    UFUNCTION(BlueprintCallable)
    EPandemicLeaderboardSortMethod GetCurrentLeaderboardSortMethod();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLeaderboardEntryCount();
    
    UFUNCTION(BlueprintCallable)
    EPandemicLeaderboardDisplayType GetCurrentLeaderboardDisplayType();
    
    // UFUNCTION(BlueprintCallable)
    // bool GetCurrentLeaderboard(FSteamLeaderboard& CurrentLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    void FindLeaderboard(const FString& LeaderboardName);
    
    // UFUNCTION(BlueprintCallable)
    // bool DownloadEntriesForUsers(TArray<FSteamID> SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    bool DownloadEntries(EPandemicLeaderboardDataRequest DataRequestType, int32 RangeStart, int32 RangeEnd);
    
};

