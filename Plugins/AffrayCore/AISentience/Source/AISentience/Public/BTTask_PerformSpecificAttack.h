#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTTask_PerformAttack.h"
#include "BTTask_PerformSpecificAttack.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_PerformSpecificAttack : public UBTTask_PerformAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DesiredAttack;
    
    UBTTask_PerformSpecificAttack();

};

