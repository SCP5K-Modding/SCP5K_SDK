#pragma once
#include "CoreMinimal.h"
#include "UIWSWaterBody.h"
#include "UIWSRiver.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class UIWS_API AUIWSRiver : public AUIWSWaterBody {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowCameraUnder;
    
    AUIWSRiver(const FObjectInitializer& ObjectInitializer);

};

