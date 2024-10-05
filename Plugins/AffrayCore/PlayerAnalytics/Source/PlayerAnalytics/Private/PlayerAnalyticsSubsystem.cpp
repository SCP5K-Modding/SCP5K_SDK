#include "PlayerAnalyticsSubsystem.h"

UPlayerAnalyticsSubsystem::UPlayerAnalyticsSubsystem() {
    this->AnalyticsMask = 2147483647;
}

bool UPlayerAnalyticsSubsystem::SaveSession(FPlayerAnalyticsSession& InSession, const FString& Filename) {
    return false;
}

void UPlayerAnalyticsSubsystem::SaveCurrentSession(const FString& Filename) {
}

bool UPlayerAnalyticsSubsystem::LoadSession(FPlayerAnalyticsSession& InSession, const FString& Filename) {
    return false;
}

bool UPlayerAnalyticsSubsystem::LoadMultipleSessions(TArray<FPlayerAnalyticsSession>& InSessions) {
    return false;
}

void UPlayerAnalyticsSubsystem::LoadCurrentSession(const FString& Filename) {
}

FPlayerAnalyticsSession UPlayerAnalyticsSubsystem::InitializeSessionColors(const FPlayerAnalyticsSession InSession) {
    return FPlayerAnalyticsSession{};
}

void UPlayerAnalyticsSubsystem::InitializeSession(FPlayerAnalyticsSession& InSession) {
}

int32 UPlayerAnalyticsSubsystem::GetTotalDeathsForPlayer(const FPlayerAnalyticsPlayer& Player) {
    return 0;
}

FVector UPlayerAnalyticsSubsystem::GetPlayerLastKnownLocation(APlayerState* Player) const {
    return FVector{};
}

FColor UPlayerAnalyticsSubsystem::GetPlayerColor(const FPlayerAnalyticsSession& InSession, const int32 Index) {
    return FColor{};
}

float UPlayerAnalyticsSubsystem::GetLastEventTime(const FPlayerAnalyticsSession& InSession) {
    return 0.0f;
}

bool UPlayerAnalyticsSubsystem::GetIsRecording(EPlayerAnalyticsEventType Type) {
    return false;
}

FPlayerAnalyticsSession UPlayerAnalyticsSubsystem::GetCurrentSession() const {
    return FPlayerAnalyticsSession{};
}

float UPlayerAnalyticsSubsystem::GetAverageTimeBetweenDeathsForPlayer(const FPlayerAnalyticsPlayer& Player) {
    return 0.0f;
}

FString UPlayerAnalyticsSubsystem::GetAnalyticsFileName(const FString& Prefix) {
    return TEXT("");
}

void UPlayerAnalyticsSubsystem::DebugPlayerAnalytics(const FPlayerAnalyticsSession& InSession, bool bDrawText, bool bPersistent, float Duration, float MaxTime) {
}

float UPlayerAnalyticsSubsystem::CalculateTimeBetweenObjectives(const FPlayerAnalyticsSession& InSession, const FString& ObjectiveA, const FString& ObjectiveB) {
    return 0.0f;
}

float UPlayerAnalyticsSubsystem::CalculateAverageTimeBetweenObjectives(const TArray<FPlayerAnalyticsSession>& InSessions, const FString& ObjectiveA, const FString& ObjectiveB) {
    return 0.0f;
}

void UPlayerAnalyticsSubsystem::AddGlobalAnalyticsEvent(FVector Location, FRotator Rotation, EPlayerAnalyticsEventType EventType, const FString& TargetName, FVector TargetLocation) {
}

void UPlayerAnalyticsSubsystem::AddAnalyticsEvent(APlayerState* Player, FVector Location, FRotator Rotation, EPlayerAnalyticsEventType EventType, const FString& TargetName, FVector TargetLocation) {
}


