#include "SoldierController.h"
#include "SAISeeingStimuliProcessingComponent.h"

ASoldierController::ASoldierController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USAISeeingStimuliProcessingComponent>(TEXT("StimuliProcessingComponent"))) {
}


