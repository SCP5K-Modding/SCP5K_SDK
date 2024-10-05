#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SettingsSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class GAMEUTILITIES_API USettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USettingsSubsystem();

};

