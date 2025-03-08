#include "BlockoutAsset.h"
#include "Components/SceneComponent.h"

ABlockoutAsset::ABlockoutAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


