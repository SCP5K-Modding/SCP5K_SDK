#include "GameEventBusSubsystem.h"

UGameEventBusSubsystem::UGameEventBusSubsystem() {
}

bool UGameEventBusSubsystem::UnsubscribeObjectFromAllGameEvents(const UObject* WorldContextObject) {
    return false;
}

bool UGameEventBusSubsystem::UnsubscribeGameEventPayloadCallback(const UObject* WorldContextObject, const FGlobalGameEventPayloadDelegate& Callback) {
    return false;
}

bool UGameEventBusSubsystem::UnsubscribeGameEventCallback(const UObject* WorldContextObject, const FGlobalGameEventDelegate& Callback) {
    return false;
}

void UGameEventBusSubsystem::UnsubscribeAllGameEvents(const UObject* WorldContextObject) {
}

bool UGameEventBusSubsystem::SubscribeToGameEventPayloadID(const UObject* WorldContextObject, const FGameplayTagQuery ID, const FGlobalGameEventPayloadDelegate& Callback) {
    return false;
}

bool UGameEventBusSubsystem::SubscribeToGameEventID(const UObject* WorldContextObject, const FGameplayTagQuery ID, const FGlobalGameEventDelegate& Callback) {
    return false;
}

void UGameEventBusSubsystem::RequestAllGameplayTags(FGameplayTagContainer& TagContainer, bool OnlyIncludeDictionaryTags) {
}

FGameplayTagQuery UGameEventBusSubsystem::MakeQueryFromTag(FGameplayTag Tag) {
    return FGameplayTagQuery{};
}

bool UGameEventBusSubsystem::InvokeGameEventPayloadID(const UObject* WorldContextObject, const UGenericGameEvent* Payload) {
    return false;
}

bool UGameEventBusSubsystem::InvokeGameEventID(const APawn* InstigatedBy, const UObject* SubjectObject, const FGameplayTagContainer& ID) {
    return false;
}

FString UGameEventBusSubsystem::GetStatsString() {
    return TEXT("");
}


