#pragma once
#include "CoreMinimal.h"
#include "Nodes/FlowNode.h"
#include "GameplayTagContainer.h"
#include "FlowNode_OnNotifyFromBus.generated.h"

class UGenericGameEvent;
class UObject;

UCLASS(Blueprintable)
class PANDEMIC_API UFlowNode_OnNotifyFromBus : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery NotifyQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPayloadEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SuccessCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetroactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString StatusString;
    
public:
    UFlowNode_OnNotifyFromBus();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEventReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnEventBusPayloadNotified(const UGenericGameEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    void OnEventBusNotified(const UObject* _, const UObject* __);
    
};

