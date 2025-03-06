#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "FPSProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FPSCONTROLLER_API UFPSProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UFPSProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

