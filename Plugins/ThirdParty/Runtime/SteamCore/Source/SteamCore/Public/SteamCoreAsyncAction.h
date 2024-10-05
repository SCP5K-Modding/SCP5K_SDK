#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SteamCoreAsyncAction.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    USteamCoreAsyncAction();

};

