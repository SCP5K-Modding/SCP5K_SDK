#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SettingsSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class GAMEUTILITIES_API USettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USettingsSubsystem();

};

