#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FPSProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FPSCONTROLLER_API UFPSProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UFPSProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

