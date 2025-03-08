#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChangedSquadMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangedSquadMCDelegate, FGuid, PreviousSquadID, FGuid, NewSquadID);

