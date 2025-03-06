#pragma once
#include "CoreMinimal.h"
#include "LocalPlayerPawnUpdatedDelegate.generated.h"

class APawn;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLocalPlayerPawnUpdated, APlayerController*, Controller, APawn*, Pawn);

