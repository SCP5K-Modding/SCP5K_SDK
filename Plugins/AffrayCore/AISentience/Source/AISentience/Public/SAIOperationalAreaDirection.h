#pragma once
#include "CoreMinimal.h"
#include "ESAIApplyAs.h"
#include "SAIDirection.h"
#include "SAIOperationalArea.h"
#include "SAIOperationalAreaDirection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AISENTIENCE_API USAIOperationalAreaDirection : public USAIDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSAIOperationalArea> OperationalAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAIApplyAs ApplyAs;
    
    USAIOperationalAreaDirection();

};

