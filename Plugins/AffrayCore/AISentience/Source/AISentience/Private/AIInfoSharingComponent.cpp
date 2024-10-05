#include "AIInfoSharingComponent.h"

UAIInfoSharingComponent::UAIInfoSharingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAIInfoSharingComponent::ShareSquadInfo(UAIInfoSharingComponent* Target) {
}

void UAIInfoSharingComponent::ShareInfo(UAIInfoSharingComponent* Target, bool bFullShare) {
}

void UAIInfoSharingComponent::ShareAllSquadInfo(UAIInfoSharingComponent* Target) {
}

void UAIInfoSharingComponent::ReceiveSquadInfo_Implementation(UAIInfoSharingComponent* OtherInfoSharingComponent, FSAISquadInfo OtherSquadInfo, bool bFullShare) {
}


