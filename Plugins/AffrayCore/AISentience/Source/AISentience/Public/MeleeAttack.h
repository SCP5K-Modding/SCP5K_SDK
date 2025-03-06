#pragma once
#include "CoreMinimal.h"
#include "SAIAttack.h"
#include "MeleeAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AISENTIENCE_API UMeleeAttack : public USAIAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackHitsMultiple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseControlRotation;
    
public:
    UMeleeAttack();

};

