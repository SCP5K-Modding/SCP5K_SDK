#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

