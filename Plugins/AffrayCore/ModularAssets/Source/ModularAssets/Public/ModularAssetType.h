#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ModularAssetType.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UModularAssetType : public UInterface {
    GENERATED_BODY()
};

class IModularAssetType : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RefreshAsset() PURE_VIRTUAL(RefreshAsset,);
    
};

