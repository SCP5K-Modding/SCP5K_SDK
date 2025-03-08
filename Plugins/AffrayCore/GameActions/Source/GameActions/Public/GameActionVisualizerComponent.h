#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "GameActionVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEACTIONS_API UGameActionVisualizerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGameActionVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

