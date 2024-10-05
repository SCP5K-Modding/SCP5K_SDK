#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USERINTERFACE_API UUIActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUIActorComponent(const FObjectInitializer& ObjectInitializer);

};

