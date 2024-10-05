#include "TheatreScreenComponent.h"

UTheatreScreenComponent::UTheatreScreenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bPossessed = false;
    this->TheatreAnomalyPawn = NULL;
    this->Range = 3000.00f;
    this->bOmnidirectional = false;
    this->MinRadius = 20.00f;
}

void UTheatreScreenComponent::UnposessedByAnomaly(ATheatreAnomaly* TheatreAnomaly) {
}

void UTheatreScreenComponent::RemoveConnection(TScriptInterface<ITheatreScreen> Other) {
}

void UTheatreScreenComponent::PosessedByAnomaly(ATheatreAnomaly* TheatreAnomaly) {
}

bool UTheatreScreenComponent::IsInSameLevel(UTheatreScreenComponent* Other) const {
    return false;
}

void UTheatreScreenComponent::HeardSound(FVector SoundLocation) {
}

FVector UTheatreScreenComponent::GetScreenSize() const {
    return FVector{};
}

UTheatreScreenComponent* UTheatreScreenComponent::GetScreenFromInterface(TScriptInterface<ITheatreScreen> Interface) {
    return NULL;
}

float UTheatreScreenComponent::GetRange() const {
    return 0.0f;
}

bool UTheatreScreenComponent::GetOmnidirectional() const {
    return false;
}

float UTheatreScreenComponent::GetMinRadius() const {
    return 0.0f;
}

bool UTheatreScreenComponent::CanSeeScreen(TScriptInterface<ITheatreScreen> Other) const {
    return false;
}

bool UTheatreScreenComponent::CanSeeLocation(FVector Location) const {
    return false;
}

bool UTheatreScreenComponent::CanSee(AActor* Other) const {
    return false;
}

void UTheatreScreenComponent::AlertAnomaly(AActor* EventInstigator, FVector Location) {
}

void UTheatreScreenComponent::AddConnection(TScriptInterface<ITheatreScreen> Other) {
}


