#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SpawnLocationHolder.generated.h"

class UAISpawnLocationComponent;

UINTERFACE(Blueprintable)
class USpawnLocationHolder : public UInterface {
    GENERATED_BODY()
};

class ISpawnLocationHolder : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAISpawnLocationComponent* GetSpawnLocation();
    
};

