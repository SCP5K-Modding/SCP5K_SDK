#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EConsumableType.h"
#include "ConsumableComponent.generated.h"

class APawn;
class UGameEventBusComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UConsumableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumableType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFullAmmo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameEventBusComponent* EventBusComponent;
    
public:
    UConsumableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetType(EConsumableType InType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InvokeEventOnGameEventBusWithType(const APawn* InstigatedBy, FGameplayTagContainer Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetConsumableTypeGameplayTag() const;
    
};

