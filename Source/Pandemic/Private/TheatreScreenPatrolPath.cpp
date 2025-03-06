#include "TheatreScreenPatrolPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TheatreScreenPatrolPathComponent.h"

ATheatreScreenPatrolPath::ATheatreScreenPatrolPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PathComponent = CreateDefaultSubobject<UTheatreScreenPatrolPathComponent>(TEXT("Path"));
}


