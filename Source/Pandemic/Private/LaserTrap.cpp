#include "LaserTrap.h"
#include "Components/BoxComponent.h"

ALaserTrap::ALaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->DamagePerSecond = 400.00f;
    this->DamageType = NULL;
    this->BoxComponent->SetupAttachment(RootComponent);
}

void ALaserTrap::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALaserTrap::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


