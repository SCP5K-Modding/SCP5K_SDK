#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "UIActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USERINTERFACE_API UUIActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUIActorComponent(const FObjectInitializer& ObjectInitializer);

};

