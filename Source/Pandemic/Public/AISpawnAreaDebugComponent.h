#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AISpawnAreaDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UAISpawnAreaDebugComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UAISpawnAreaDebugComponent(const FObjectInitializer& ObjectInitializer);

};

