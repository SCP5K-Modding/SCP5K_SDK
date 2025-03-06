#pragma once
#include "CoreMinimal.h"
#include "PotentialObserversModifiedMCDelegateDelegate.generated.h"

class USCP173ObserverComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPotentialObserversModifiedMCDelegate, const TArray<USCP173ObserverComponent*>&, ModifiedObservers);

