#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "Templates/SubclassOf.h"
#include "DamageSubjectGameAction.generated.h"

class UDamageType;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PANDEMIC_API UDamageSubjectGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UDamageSubjectGameAction();

};

