#include "ShootableGlassActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Electronics -ObjectName=DoorLinkComponent -FallbackName=DoorLinkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ShootableGlass.h"

AShootableGlassActor::AShootableGlassActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ShootableGlass = CreateDefaultSubobject<UShootableGlass>(TEXT("ShootableGlass"));
    this->DoorLink = CreateDefaultSubobject<UDoorLinkComponent>(TEXT("DoorLink"));
    this->ShootableGlass->SetupAttachment(RootComponent);
}

void AShootableGlassActor::OnGlassBreak(UShootableGlass* InShootableGlass) {
}


