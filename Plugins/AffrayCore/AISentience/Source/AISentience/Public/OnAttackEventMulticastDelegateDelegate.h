#pragma once
#include "CoreMinimal.h"
#include "OnAttackEventMulticastDelegateDelegate.generated.h"

class AActor;
class USAIAttack;
class USAIAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttackEventMulticastDelegate, USAIAttackComponent*, AttackComponent, const AActor*, Target, const USAIAttack*, Attack, const uint8, AttackIndex);

