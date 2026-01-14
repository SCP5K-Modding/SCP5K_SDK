#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//#include "UObject/Vector.h"
#include "EHitBodyQuadrant.h"
#include "HitReactionData.h"
#include "HitReactionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHitReactionInterface : public UInterface {
    GENERATED_BODY()
};

class IHitReactionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsHit(bool bIsHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHitReactionData(FHitReactionData HitReactionData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHitQuadrant(EHitBodyQuadrant HitQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHitLocalPosition(FVector LocalPosition);
    
};

