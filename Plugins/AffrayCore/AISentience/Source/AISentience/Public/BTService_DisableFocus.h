#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_DisableFocus.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTService_DisableFocus : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ClearFocusPriority;
    
public:
    UBTService_DisableFocus();

};

