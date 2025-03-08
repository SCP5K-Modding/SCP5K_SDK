#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AIInfoSharer.generated.h"

class UAIInfoSharingComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UAIInfoSharer : public UInterface {
    GENERATED_BODY()
};

class IAIInfoSharer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAIInfoSharingComponent* GetInfoSharingComponent();
    
};

