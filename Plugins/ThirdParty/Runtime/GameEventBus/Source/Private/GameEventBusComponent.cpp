#include "GameEventBusComponent.h"

UGameEventBusComponent::UGameEventBusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EvtBus = NULL;
}

bool UGameEventBusComponent::UnsubscribeObjectFromAllGameEvents(const UObject* WorldContextObject) {
    return false;
}

bool UGameEventBusComponent::UnsubscribeGameEventPayloadCallback(const UObject* WorldContextObject, const FGlobalGameEventPayloadDelegate& Callback) {
    return false;
}

bool UGameEventBusComponent::UnsubscribeGameEventCallback(const UObject* WorldContextObject, const FGlobalGameEventDelegate& Callback) {
    return false;
}

FGameplayTagContainer UGameEventBusComponent::TagToContainer(const FGameplayTag Tag) {
    return FGameplayTagContainer{};
}

bool UGameEventBusComponent::SubscribeToGameEventPayloadID(const UObject* WorldContextObject, const FGameplayTagQuery& ID, const FGlobalGameEventPayloadDelegate& Callback) {
    return false;
}

bool UGameEventBusComponent::SubscribeToGameEventID(const UObject* WorldContextObject, const FGameplayTagQuery& ID, const FGlobalGameEventDelegate& Callback) {
    return false;
}

bool UGameEventBusComponent::InvokeGameEventPayloadID(const UObject* WorldContextObject, const UGenericGameEvent* Payload) {
    return false;
}

bool UGameEventBusComponent::InvokeGameEventID(const APawn* InstigatedBy, const UObject* Subject, const FGameplayTagContainer& ID) {
    return false;
}

FGameplayTagContainer UGameEventBusComponent::AppendTagToContainer(FGameplayTagContainer A, FGameplayTagContainer B) {
    return FGameplayTagContainer{};
}


