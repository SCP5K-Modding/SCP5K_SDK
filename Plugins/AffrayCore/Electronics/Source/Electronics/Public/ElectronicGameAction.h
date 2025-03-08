#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "EElectronicProperty.h"
#include "ElectronicGameAction.generated.h"

class AElectronic;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ELECTRONICS_API UElectronicGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AElectronic*> Electronics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EElectronicProperty, bool> Properties;
    
    UElectronicGameAction();

};

