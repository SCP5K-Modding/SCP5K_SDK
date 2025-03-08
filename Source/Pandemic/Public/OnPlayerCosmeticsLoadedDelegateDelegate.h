#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnPlayerCosmeticsLoadedDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerCosmeticsLoadedDelegate, APlayerState*, Player, const TArray<FPrimaryAssetId>&, Assets);

