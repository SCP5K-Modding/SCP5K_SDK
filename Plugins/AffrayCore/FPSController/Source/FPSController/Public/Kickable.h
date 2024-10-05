#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Kickable.generated.h"

class AFPSCharacterBase;

UINTERFACE(Blueprintable)
class UKickable : public UInterface {
    GENERATED_BODY()
};

class IKickable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Kick(AFPSCharacterBase* Kicker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeKicked(AFPSCharacterBase* Kicker);
    
};

