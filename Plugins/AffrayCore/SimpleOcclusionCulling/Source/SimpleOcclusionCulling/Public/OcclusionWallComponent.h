#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "OcclusionWallComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIMPLEOCCLUSIONCULLING_API UOcclusionWallComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwoSided;
    
    UOcclusionWallComponent(const FObjectInitializer& ObjectInitializer);

};

