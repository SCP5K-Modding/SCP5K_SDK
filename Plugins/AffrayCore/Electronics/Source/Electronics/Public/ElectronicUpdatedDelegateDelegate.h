#pragma once
#include "CoreMinimal.h"
#include "ElectronicUpdatedDelegateDelegate.generated.h"

class AElectronic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElectronicUpdatedDelegate, AElectronic*, Electronic);

