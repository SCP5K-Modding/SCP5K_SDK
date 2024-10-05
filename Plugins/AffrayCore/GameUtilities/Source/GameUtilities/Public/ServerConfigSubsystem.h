#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ServerConfigSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEUTILITIES_API UServerConfigSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UServerConfigSubsystem();

};

