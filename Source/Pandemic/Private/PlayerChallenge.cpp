#include "PlayerChallenge.h"

#include "FlowComponent.h"
#include "GameEventBusComponent.h"
#include "GameplayTagContainer.h"

APlayerChallenge::APlayerChallenge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlowHost = CreateDefaultSubobject<UFlowComponent>(TEXT("FlowHost"));
    this->FlowHostRunningFlow = NULL;
    this->EventBus = CreateDefaultSubobject<UGameEventBusComponent>(TEXT("EventBus"));
}

void APlayerChallenge::OnChallengeSucceeded() {
}

void APlayerChallenge::OnChallengeFailed() {
}

void APlayerChallenge::OnChallengeDeclined() {
}

UFlowPlayerChallengeAsset* APlayerChallenge::OnChallengeAccepted() {
    return NULL;
}



bool APlayerChallenge::InvokeEventOnEventBusWithIDAndTypeTag(const FGameplayTagContainer& TagContainer) const {
    return false;
}


