#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "GameActionVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEACTIONS_API UGameActionVisualizerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGameActionVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

