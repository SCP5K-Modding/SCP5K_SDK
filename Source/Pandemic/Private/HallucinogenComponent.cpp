#include "HallucinogenComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UHallucinogenComponent::UHallucinogenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UHallucinogenComponent::ShouldHallucinationBeRemoved_Implementation(const UHallucination* Hallucination) const {
    return false;
}

void UHallucinogenComponent::RemoveHallucination(UHallucination* Hallucination) {
}

bool UHallucinogenComponent::RemoveAllHallucinationsFromPawn(APawn* Pawn) {
    return false;
}

UHallucination* UHallucinogenComponent::CreateHallucination(TSubclassOf<UHallucination> HallucinationClass, APawn* TargetPawn, float CustomDuration, float CustomTickInterval, float CustomDelay) {
    return NULL;
}

void UHallucinogenComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHallucinogenComponent, Hallucinations);
}


