#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RelationshipVisualizerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API URelationshipVisualizerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> VisualizationTargets;
    
public:
    URelationshipVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

