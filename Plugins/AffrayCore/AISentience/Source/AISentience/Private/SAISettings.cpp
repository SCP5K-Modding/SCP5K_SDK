#include "SAISettings.h"

USAISettings::USAISettings() {
    this->bAllowReverseDefinitions = true;
}

TEnumAsByte<ETeamAttitude::Type> USAISettings::GetAttitude(FGenericTeamId Of, FGenericTeamId Towards) {
    return ETeamAttitude::Friendly;
}


