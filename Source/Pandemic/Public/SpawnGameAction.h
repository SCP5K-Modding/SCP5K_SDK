#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameActions -ObjectName=GameAction -FallbackName=GameAction
#include "SpawnGameAction.generated.h"

class AAISpawnArea;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API USpawnGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnArea*> SpawnAreas;
    
    USpawnGameAction();

};

