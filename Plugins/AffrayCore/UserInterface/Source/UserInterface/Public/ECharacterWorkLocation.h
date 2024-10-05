#pragma once
#include "CoreMinimal.h"
#include "ECharacterWorkLocation.generated.h"

UENUM(BlueprintType)
enum class ECharacterWorkLocation : uint8 {
    None,
    HumanoidAndEsotericResearch,
    ParabiologyAndRhizospherics,
    Admin,
    HumanResources,
    MaintenanceAndJanitorial,
    Logistics,
    Containment,
    RemedialAndRadiology,
    InternalSecurity,
    EthicsCommittee,
    RadioQuietZone,
    Parazoology,
    ParapathologyAndBiohazardRAndD,
    EsotericReduction,
    ElectrotechnicalEngineering,
    InformationTechnology,
};

