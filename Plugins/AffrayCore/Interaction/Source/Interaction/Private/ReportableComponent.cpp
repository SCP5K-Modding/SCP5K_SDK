#include "ReportableComponent.h"
#include "Net/UnrealNetwork.h"

UReportableComponent::UReportableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bHasBeenInvestigated = false;
    this->bHasBeenReported = false;
    this->bRegisterAsReportable = true;
    this->bShowWithoutInvestigation = false;
}

void UReportableComponent::ServerReport_Implementation(AActor* Instigator) {
}

void UReportableComponent::OnRep_bHasBeenInvestigated() {
}

void UReportableComponent::MulticastReport_Implementation(AActor* Instigator) {
}

void UReportableComponent::Investigated() {
}

void UReportableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReportableComponent, bHasBeenInvestigated);
    DOREPLIFETIME(UReportableComponent, bHasBeenReported);
}


