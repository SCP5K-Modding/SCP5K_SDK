#include "SAICoverDebugActor.h"
#include "SAICoverDebugPrimitiveComponent.h"

ASAICoverDebugActor::ASAICoverDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USAICoverDebugPrimitiveComponent>(TEXT("CoverSceneComponent"));
    this->bDrawGeneratedCover = false;
}

void ASAICoverDebugActor::UpdateCoverDrawing() const {
}

void ASAICoverDebugActor::GenerateCoverPointsWithDebugDraw() {
}

void ASAICoverDebugActor::GenerateCoverPointsInDebugArea() {
}

void ASAICoverDebugActor::GenerateCoverPointsForMap() {
}

void ASAICoverDebugActor::ClearAllCover() const {
}


