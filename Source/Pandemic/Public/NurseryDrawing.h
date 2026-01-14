#pragma once
#include "CoreMinimal.h"
#include "PlayerTriggerVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameUtilities -ObjectName=PlayerTriggerVolume -FallbackName=PlayerTriggerVolume
#include "NurseryDrawing.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class PANDEMIC_API ANurseryDrawing : public APlayerTriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AmbientSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* EventSound;
    
public:
    ANurseryDrawing(const FObjectInitializer& ObjectInitializer);

};

