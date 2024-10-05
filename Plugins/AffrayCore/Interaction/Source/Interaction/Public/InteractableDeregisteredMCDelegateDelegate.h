#pragma once
#include "CoreMinimal.h"
#include "InteractableDeregisteredMCDelegateDelegate.generated.h"

class UInteractableComponent;
class UInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractableDeregisteredMCDelegate, UInteractionComponent*, InteractionComponent, UInteractableComponent*, DeregisteredInteractable);

