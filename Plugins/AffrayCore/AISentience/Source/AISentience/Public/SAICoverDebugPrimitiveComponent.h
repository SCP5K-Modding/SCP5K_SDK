#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SAICoverDebugPrimitiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAICoverDebugPrimitiveComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USAICoverDebugPrimitiveComponent(const FObjectInitializer& ObjectInitializer);

};

