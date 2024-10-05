#include "Map.h"
#include "MapComponent.h"

AMap::AMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMapComponent>(TEXT("Map"));
    this->MapComponent = (UMapComponent*)RootComponent;
}


