#pragma once
#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "QueryDelegatePair.h"
#include "GameEventBusCoprocessor.generated.h"

class UGameEventBusComponent;

UCLASS(Blueprintable, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEEVENTBUS_API UGameEventBusCoprocessor : public UGameStateComponent {
    GENERATED_BODY()
public:
    virtual void HandleMatchHasStarted() override {}

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameEventBusComponent* EventBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueryDelegatePair> Queries;
    
public:
    UGameEventBusCoprocessor(const FObjectInitializer& ObjectInitializer);

};
