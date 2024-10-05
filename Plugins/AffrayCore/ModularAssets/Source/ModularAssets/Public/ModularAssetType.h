#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
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

