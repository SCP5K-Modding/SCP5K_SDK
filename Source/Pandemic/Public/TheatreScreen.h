#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TheatreScreen.generated.h"

class UTheatreScreenComponent;

UINTERFACE(Blueprintable)
class UTheatreScreen : public UInterface {
    GENERATED_BODY()
};

class ITheatreScreen : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTheatreScreenComponent* GetScreenComponent();
    
};

