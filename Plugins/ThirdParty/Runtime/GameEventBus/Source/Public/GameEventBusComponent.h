#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GlobalGameEventDelegateDelegate.h"
#include "GlobalGameEventPayloadDelegateDelegate.h"
#include "GameEventBusComponent.generated.h"

class APawn;
class UGameEventBusSubsystem;
class UGenericGameEvent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEEVENTBUS_API UGameEventBusComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameEventBusSubsystem* EvtBus;
    
public:
    UGameEventBusComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool UnsubscribeObjectFromAllGameEvents(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool UnsubscribeGameEventPayloadCallback(const UObject* WorldContextObject, const FGlobalGameEventPayloadDelegate& Callback);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool UnsubscribeGameEventCallback(const UObject* WorldContextObject, const FGlobalGameEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer TagToContainer(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool SubscribeToGameEventPayloadID(const UObject* WorldContextObject, const FGameplayTagQuery& ID, const FGlobalGameEventPayloadDelegate& Callback);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool SubscribeToGameEventID(const UObject* WorldContextObject, const FGameplayTagQuery& ID, const FGlobalGameEventDelegate& Callback);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool InvokeGameEventPayloadID(const UObject* WorldContextObject, const UGenericGameEvent* Payload);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool InvokeGameEventID(const APawn* InstigatedBy, const UObject* Subject, const FGameplayTagContainer& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer AppendTagToContainer(FGameplayTagContainer A, FGameplayTagContainer B);
    
};

