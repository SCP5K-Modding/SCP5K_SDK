#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "BlockoutEditorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARASSETS_API UBlockoutEditorComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UBlockoutEditorComponent(const FObjectInitializer& ObjectInitializer);

};

