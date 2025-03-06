#include "SoldierController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAISeeingStimuliProcessingComponent -FallbackName=SAISeeingStimuliProcessingComponent

ASoldierController::ASoldierController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USAISeeingStimuliProcessingComponent>(TEXT("StimuliProcessingComponent"))) {
}


