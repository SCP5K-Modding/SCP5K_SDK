#pragma once
#include "CoreMinimal.h"
#include "ElectronicValueUpdatedDelegateDelegate.generated.h"

class AElectronic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElectronicValueUpdatedDelegate, AElectronic*, Electronic, bool, bValue);

