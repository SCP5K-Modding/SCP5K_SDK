#pragma once
#include "CoreMinimal.h"
#include "EClockworkDialSetting.h"
#include "ChamberUpgradeDialUpdatedDelegateDelegate.generated.h"

class AActor;
class ATestingChamberUpgradeMachine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FChamberUpgradeDialUpdatedDelegate, ATestingChamberUpgradeMachine*, UpgradeMachine, AActor*, Instigator, EClockworkDialSetting, DialSetting);

