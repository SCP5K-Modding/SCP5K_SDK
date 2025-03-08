#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "DoorLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELECTRONICS_API UDoorLinkComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UDoorLinkComponent(const FObjectInitializer& ObjectInitializer);

};

