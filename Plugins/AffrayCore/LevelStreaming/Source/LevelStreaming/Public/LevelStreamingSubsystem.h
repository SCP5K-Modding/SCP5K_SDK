#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LevelStreamingSubsystem.generated.h"

UCLASS(Blueprintable)
class LEVELSTREAMING_API ULevelStreamingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    ULevelStreamingSubsystem();

};

