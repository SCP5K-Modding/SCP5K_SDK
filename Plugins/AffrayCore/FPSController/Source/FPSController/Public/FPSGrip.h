#pragma once
#include "CoreMinimal.h"
#include "FPSAttachment.h"
#include "FPSGrip.generated.h"

class UFPSGripData;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSGrip : public AFPSAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSGripData* GripData;
    
public:
    AFPSGrip(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSGripData* GetGripData() const;
    
};

