#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameEventPayloadQueryCallback.h"
#include "GameEventQueryCallback.h"
#include "GlobalGameEventDelegateDelegate.h"
#include "GlobalGameEventPayloadDelegateDelegate.h"
#include "GameEventBusSubsystem.generated.h"

class APawn;
class UGenericGameEvent;
class UObject;

UCLASS(Blueprintable)
class GAMEEVENTBUS_API UGameEventBusSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameEventQueryCallback> GameEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameEventPayloadQueryCallback> GameEventPayloads;
    
public:
    UGameEventBusSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnsubscribeObjectFromAllGameEvents(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnsubscribeGameEventPayloadCallback(const UObject* WorldContextObject, const FGlobalGameEventPayloadDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnsubscribeGameEventCallback(const UObject* WorldContextObject, const FGlobalGameEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnsubscribeAllGameEvents(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SubscribeToGameEventPayloadID(const UObject* WorldContextObject, const FGameplayTagQuery ID, const FGlobalGameEventPayloadDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SubscribeToGameEventID(const UObject* WorldContextObject, const FGameplayTagQuery ID, const FGlobalGameEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void RequestAllGameplayTags(FGameplayTagContainer& TagContainer, bool OnlyIncludeDictionaryTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagQuery MakeQueryFromTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool InvokeGameEventPayloadID(const UObject* WorldContextObject, const UGenericGameEvent* Payload);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool InvokeGameEventID(const APawn* InstigatedBy, const UObject* SubjectObject, const FGameplayTagContainer& ID);
    
    UFUNCTION(BlueprintCallable)
    FString GetStatsString();
    
};

