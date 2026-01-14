#include "TestingChamberChallenge.h"

ATestingChamberChallenge::ATestingChamberChallenge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlowHostRunningChamberFlow = NULL;
}

void ATestingChamberChallenge::OnWaveStarted() {
}

void ATestingChamberChallenge::OnWaveComplete() {
}

void ATestingChamberChallenge::OnFinalWaveComplete() {
}

void ATestingChamberChallenge::OnChamberStarted(const UObject* EvtInstigator) {
}

void ATestingChamberChallenge::OnChamberExited() {
}

void ATestingChamberChallenge::OnChamberEnter(const UObject* EvtInstigator) {
}







int32 ATestingChamberChallenge::GetTokenReward(const ATestingChamberManager* TestingChamber) const {
    return 0;
}

int32 ATestingChamberChallenge::GetTeamScoreReward(const ATestingChamberManager* TestingChamber) const {
    return 0;
}


