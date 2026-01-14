#pragma once
#include "CoreMinimal.h"
#include "StagingAreaUpgradeRoomsLoadedDelegateDelegate.generated.h"

class APlayerState;
class ATestingChamberUpgradeRoom;
class AWaveStagingArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStagingAreaUpgradeRoomsLoadedDelegate, AWaveStagingArea*, StagingArea, const TArray<APlayerState*>&, Players, const TArray<ATestingChamberUpgradeRoom*>&, UpgradeRooms);

