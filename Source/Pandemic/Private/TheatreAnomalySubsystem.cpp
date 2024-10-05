#include "TheatreAnomalySubsystem.h"

UTheatreAnomalySubsystem::UTheatreAnomalySubsystem() {
}

bool UTheatreAnomalySubsystem::MoveTowardScreen(UTheatreScreenComponent* Screen) {
    return false;
}

bool UTheatreAnomalySubsystem::IsAnomalyAlive() const {
    return false;
}

ATheatreAnomaly* UTheatreAnomalySubsystem::GetTheatreAnomaly() const {
    return NULL;
}

TArray<UTheatreScreenComponent*> UTheatreAnomalySubsystem::GetScreens() const {
    return TArray<UTheatreScreenComponent*>();
}

UTheatreScreenComponent* UTheatreAnomalySubsystem::GetClosestScreen(FVector position, float AcceptedDistance, bool bIgnoreVisibility) const {
    return NULL;
}

bool UTheatreAnomalySubsystem::ForceMoveToScreen(UTheatreScreenComponent* Screen) {
    return false;
}

bool UTheatreAnomalySubsystem::AlertToScreen(UTheatreScreenComponent* Screen, AActor* EventInstigator, FVector Location) {
    return false;
}


