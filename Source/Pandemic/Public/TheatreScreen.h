#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

