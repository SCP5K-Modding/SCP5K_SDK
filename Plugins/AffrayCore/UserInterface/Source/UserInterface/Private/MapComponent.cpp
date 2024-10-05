#include "MapComponent.h"

UMapComponent::UMapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->TestActor = NULL;
    this->Map = NULL;
    this->DefaultIcon = NULL;
    this->OverlayTexture = NULL;
}

FVector2D UMapComponent::GetUVAxisAligned(FVector position) const {
    return FVector2D{};
}

FVector2D UMapComponent::GetUV(FVector position) const {
    return FVector2D{};
}

FVector2D UMapComponent::GetSize() const {
    return FVector2D{};
}

UTexture* UMapComponent::GetOverlayTexture() const {
    return NULL;
}

FVector UMapComponent::GetMinReference() const {
    return FVector{};
}

FVector UMapComponent::GetMinCorner() const {
    return FVector{};
}

FVector UMapComponent::GetMaxReference() const {
    return FVector{};
}

FVector UMapComponent::GetMaxCorner() const {
    return FVector{};
}

FName UMapComponent::GetMapName() const {
    return NAME_None;
}

UTexture2D* UMapComponent::GetMap() const {
    return NULL;
}


