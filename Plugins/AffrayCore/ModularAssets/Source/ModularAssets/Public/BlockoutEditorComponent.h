#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "BlockoutEditorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARASSETS_API UBlockoutEditorComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UBlockoutEditorComponent(const FObjectInitializer& ObjectInitializer);

};

