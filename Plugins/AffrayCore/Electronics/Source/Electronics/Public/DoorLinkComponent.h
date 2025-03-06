#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomComponent -FallbackName=NavLinkCustomComponent
#include "DoorLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELECTRONICS_API UDoorLinkComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UDoorLinkComponent(const FObjectInitializer& ObjectInitializer);

};

