#include "InvestigationSubsytem.h"

UInvestigationSubsytem::UInvestigationSubsytem() {
}

void UInvestigationSubsytem::UnregisterReportable(USceneComponent* Reportable) {
}

void UInvestigationSubsytem::UnregisterInteractable(USceneComponent* Interactable) {
}

void UInvestigationSubsytem::SortComponentsByDistance(TArray<USceneComponent*>& Array, FVector Location) {
}

void UInvestigationSubsytem::SortActorsByDistance(TArray<AActor*>& Array, FVector Location) {
}

void UInvestigationSubsytem::RegisterReportable(USceneComponent* Reportable) {
}

void UInvestigationSubsytem::RegisterInteractable(USceneComponent* Interactable) {
}

UReportableComponent* UInvestigationSubsytem::GetReportable(AActor* Owner) {
    return NULL;
}

TArray<USceneComponent*> UInvestigationSubsytem::GetNearbyReportables(FVector Location, float Radius, int32 Maximum) {
    return TArray<USceneComponent*>();
}

TArray<USceneComponent*> UInvestigationSubsytem::GetNearbyInteractables(FVector Location, float Radius, int32 Maximum) {
    return TArray<USceneComponent*>();
}

USceneComponent* UInvestigationSubsytem::GetClosestReportable(FVector Location, float Radius) {
    return NULL;
}

USceneComponent* UInvestigationSubsytem::GetClosestInteractable(FVector Location, float Radius) {
    return NULL;
}


