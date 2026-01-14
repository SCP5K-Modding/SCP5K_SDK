#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "TeleporterGameAction.generated.h"

class ATeleporter;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API UTeleporterGameAction : public UGameAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* Teleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* OverrideTargetTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelativeToRoot;
    
public:
    UTeleporterGameAction();

};

