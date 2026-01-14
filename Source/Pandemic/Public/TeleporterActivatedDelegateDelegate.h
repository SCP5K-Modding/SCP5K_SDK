#pragma once
#include "CoreMinimal.h"
#include "TeleporterActivatedDelegateDelegate.generated.h"

class APawn;
class ATeleporter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTeleporterActivatedDelegate, ATeleporter*, Teleporter, ATeleporter*, TargetTeleporter, const TArray<APawn*>&, TeleportedPawns);

