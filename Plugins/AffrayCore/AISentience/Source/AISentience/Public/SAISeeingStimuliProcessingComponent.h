#pragma once
#include "CoreMinimal.h"
#include "SAIStimuliProcessingComponent.h"
#include "SAISeeingStimuliProcessingComponent.generated.h"

class ALightManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAISeeingStimuliProcessingComponent : public USAIStimuliProcessingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALightManager* LightManager;
    
public:
    USAISeeingStimuliProcessingComponent(const FObjectInitializer& ObjectInitializer);

};

