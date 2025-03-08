#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LiftFloor.generated.h"

class AElectronic;
class AElectronicDoor;

USTRUCT(BlueprintType)
struct FLiftFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronicDoor* Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronic* ElectronicToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LiftTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FloorName;
    
    ELECTRONICS_API FLiftFloor();
};

