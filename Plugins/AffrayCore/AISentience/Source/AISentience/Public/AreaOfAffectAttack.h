#pragma once
#include "CoreMinimal.h"
#include "SAIAttack.h"
#include "AreaOfAffectAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AISENTIENCE_API UAreaOfAffectAttack : public USAIAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLineOfEffect;
    
public:
    UAreaOfAffectAttack();

};

