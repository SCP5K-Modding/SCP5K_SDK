#pragma once
#include "CoreMinimal.h"
#include "ChamberUpgradeMachineRunningDelegateDelegate.generated.h"

class AActor;
class ATestingChamberUpgradeMachine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChamberUpgradeMachineRunningDelegate, ATestingChamberUpgradeMachine*, UpgradeMachine, AActor*, Instigator, bool, bIsRunning);

