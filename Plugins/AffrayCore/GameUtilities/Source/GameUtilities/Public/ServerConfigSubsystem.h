#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ServerConfigSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEUTILITIES_API UServerConfigSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UServerConfigSubsystem();

};

