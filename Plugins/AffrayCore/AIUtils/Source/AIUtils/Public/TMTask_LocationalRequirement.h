#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TaskManagerTask.h"
#include "TMTask_LocationalRequirement.generated.h"

UCLASS(Blueprintable)
class AIUTILS_API UTMTask_LocationalRequirement : public UTaskManagerTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Blackboard_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Blackboard_HasLocationalRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationRequirement;
    
public:
    UTMTask_LocationalRequirement();

};

