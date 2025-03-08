#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SignificanceSubsystem.generated.h"

UCLASS(Blueprintable)
class SIGNIFICANCEBASE_API USignificanceSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USignificanceSubsystem();

};

