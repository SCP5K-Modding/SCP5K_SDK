#include "TheatreScreenPatrolPath.h"
#include "Components/SceneComponent.h"
#include "TheatreScreenPatrolPathComponent.h"

ATheatreScreenPatrolPath::ATheatreScreenPatrolPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PathComponent = CreateDefaultSubobject<UTheatreScreenPatrolPathComponent>(TEXT("Path"));
}


