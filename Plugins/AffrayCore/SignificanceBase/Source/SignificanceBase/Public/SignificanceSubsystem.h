#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "SignificanceSubsystem.generated.h"

UCLASS(Blueprintable)
class SIGNIFICANCEBASE_API USignificanceSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USignificanceSubsystem();

};

