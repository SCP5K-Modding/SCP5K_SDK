#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "AffrayCheatManager.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UAffrayCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UAffrayCheatManager();

};

