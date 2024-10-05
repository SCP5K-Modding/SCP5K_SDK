#pragma once
#include "CoreMinimal.h"
#include "InteractableRegisteredMCDelegateDelegate.generated.h"

class UInteractableComponent;
class UInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractableRegisteredMCDelegate, UInteractionComponent*, InteractionComponent, UInteractableComponent*, RegisteredInteractable);

