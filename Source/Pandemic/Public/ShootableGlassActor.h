#pragma once
#include "CoreMinimal.h"
#include "NavLinkHostInterface.h"
#include "DoorLinkComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavRelevantInterface -FallbackName=NavRelevantInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkHostInterface -FallbackName=NavLinkHostInterface
#include "ShootableGlassActor.generated.h"

class UShootableGlass;

UCLASS(Blueprintable)
class PANDEMIC_API AShootableGlassActor : public AActor, public INavLinkHostInterface, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShootableGlass* ShootableGlass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDoorLinkComponent* DoorLink;
    
    AShootableGlassActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnGlassBreak(UShootableGlass* InShootableGlass);
    

    // Fix for true pure virtual functions not being implemented
};

