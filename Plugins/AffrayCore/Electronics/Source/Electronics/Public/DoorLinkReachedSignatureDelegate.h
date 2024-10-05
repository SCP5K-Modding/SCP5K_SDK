#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DoorLinkReachedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDoorLinkReachedSignature, AActor*, MovingActor, const FVector&, DestinationPoint);

