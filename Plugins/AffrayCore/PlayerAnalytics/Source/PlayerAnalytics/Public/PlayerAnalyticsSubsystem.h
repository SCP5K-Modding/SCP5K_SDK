#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EPlayerAnalyticsEventType.h"
#include "PlayerAnalyticsPlayer.h"
#include "PlayerAnalyticsSession.h"
#include "PlayerAnalyticsSubsystem.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class PLAYERANALYTICS_API UPlayerAnalyticsSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnalyticsMask;
    
public:
    UPlayerAnalyticsSubsystem();

    UFUNCTION(BlueprintCallable)
    static bool SaveSession(FPlayerAnalyticsSession& InSession, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentSession(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadSession(FPlayerAnalyticsSession& InSession, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadMultipleSessions(TArray<FPlayerAnalyticsSession>& InSessions);
    
    UFUNCTION(BlueprintCallable)
    void LoadCurrentSession(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    FPlayerAnalyticsSession InitializeSessionColors(const FPlayerAnalyticsSession InSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void InitializeSession(FPlayerAnalyticsSession& InSession);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalDeathsForPlayer(const FPlayerAnalyticsPlayer& Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerLastKnownLocation(APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetPlayerColor(const FPlayerAnalyticsSession& InSession, const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static float GetLastEventTime(const FPlayerAnalyticsSession& InSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRecording(EPlayerAnalyticsEventType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerAnalyticsSession GetCurrentSession() const;
    
    UFUNCTION(BlueprintCallable)
    static float GetAverageTimeBetweenDeathsForPlayer(const FPlayerAnalyticsPlayer& Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnalyticsFileName(const FString& Prefix);
    
    UFUNCTION(BlueprintCallable)
    void DebugPlayerAnalytics(const FPlayerAnalyticsSession& InSession, bool bDrawText, bool bPersistent, float Duration, float MaxTime);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateTimeBetweenObjectives(const FPlayerAnalyticsSession& InSession, const FString& ObjectiveA, const FString& ObjectiveB);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateAverageTimeBetweenObjectives(const TArray<FPlayerAnalyticsSession>& InSessions, const FString& ObjectiveA, const FString& ObjectiveB);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalAnalyticsEvent(FVector Location, FRotator Rotation, EPlayerAnalyticsEventType EventType, const FString& TargetName, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddAnalyticsEvent(APlayerState* Player, FVector Location, FRotator Rotation, EPlayerAnalyticsEventType EventType, const FString& TargetName, FVector TargetLocation);
    
};

