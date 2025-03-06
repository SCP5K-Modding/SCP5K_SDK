#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "AISpawnAreaDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UAISpawnAreaDebugComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UAISpawnAreaDebugComponent(const FObjectInitializer& ObjectInitializer);

};

