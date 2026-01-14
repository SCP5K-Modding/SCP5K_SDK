#pragma once
#include "CoreMinimal.h"
#include "ChamberUpgradeMachineFinishedDelegateDelegate.generated.h"

class AActor;
class ATestingChamberUpgradeMachine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChamberUpgradeMachineFinishedDelegate, ATestingChamberUpgradeMachine*, UpgradeMachine, AActor*, Instigator, bool, bWasFailure);

