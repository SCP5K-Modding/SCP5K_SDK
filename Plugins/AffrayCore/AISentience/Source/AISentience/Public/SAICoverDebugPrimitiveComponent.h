#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "SAICoverDebugPrimitiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAICoverDebugPrimitiveComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USAICoverDebugPrimitiveComponent(const FObjectInitializer& ObjectInitializer);

};

