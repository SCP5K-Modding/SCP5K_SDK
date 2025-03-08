#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "UObject/NoExportTypes.h"
#include "BTTask_MoveToLocationInRadius.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTTask_MoveToLocationInRadius : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveToLocationInRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZDifference;
    
public:
    UBTTask_MoveToLocationInRadius();

};

