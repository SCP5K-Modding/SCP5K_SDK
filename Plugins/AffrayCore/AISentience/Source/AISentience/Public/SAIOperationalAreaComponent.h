#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SAIOperationalAreaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIOperationalAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USAIOperationalAreaComponent(const FObjectInitializer& ObjectInitializer);

};

