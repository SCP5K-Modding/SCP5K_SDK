#include "FlowTestingChamberChallengeAsset.h"

UFlowTestingChamberChallengeAsset::UFlowTestingChamberChallengeAsset() {
   // this->CustomInputs.AddDefaulted(8);
   // this->CustomOutputs.AddDefaulted(2);
}

bool UFlowTestingChamberChallengeAsset::K2_OnWaveStarted() const {
    return false;
}

bool UFlowTestingChamberChallengeAsset::K2_OnWaveComplete() const {
    return false;
}

bool UFlowTestingChamberChallengeAsset::K2_OnFinalWaveComplete() const {
    return false;
}

bool UFlowTestingChamberChallengeAsset::K2_OnChamberStarted() const {
    return false;
}

bool UFlowTestingChamberChallengeAsset::K2_OnChamberExited() const {
    return false;
}

bool UFlowTestingChamberChallengeAsset::K2_OnChamberEnter() const {
    return false;
}


