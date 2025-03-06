#pragma once
#include "CoreMinimal.h"
#include "SCP610Character.h"
#include "SCP610SentryCharacter.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610SentryCharacter : public ASCP610Character {
    GENERATED_BODY()
public:
    ASCP610SentryCharacter(const FObjectInitializer& ObjectInitializer);

};

