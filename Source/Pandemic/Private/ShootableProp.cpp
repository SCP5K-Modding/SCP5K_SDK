#include "ShootableProp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AShootableProp::AShootableProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
}

void AShootableProp::SetHitData(const FSimpleHitData& InHitData) {
}


void AShootableProp::OnRep_HitData() {
}

void AShootableProp::MulticastFirstHit_Implementation(FVector_NetQuantize position, FVector_NetQuantizeNormal HitFromDirection) {
}

void AShootableProp::CosmeticHit_Implementation() {
}

void AShootableProp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShootableProp, HitData);
}


