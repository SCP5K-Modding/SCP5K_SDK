#pragma once
#include "CoreMinimal.h"
#include "InteractionInterruptedMCDelegateDelegate.generated.h"

class AActor;
class UInteractableComponent;
class UInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractionInterruptedMCDelegate, UInteractionComponent*, InteractionComponent, UInteractableComponent*, Interactable, AActor*, EventInstigator);

