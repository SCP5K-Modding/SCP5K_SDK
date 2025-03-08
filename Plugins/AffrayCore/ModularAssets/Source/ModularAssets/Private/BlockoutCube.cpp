#include "BlockoutCube.h"
#include "Components/StaticMeshComponent.h"

ABlockoutCube::ABlockoutCube(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->Mesh = NULL;
    this->MeshComponent->SetupAttachment(RootComponent);
}


