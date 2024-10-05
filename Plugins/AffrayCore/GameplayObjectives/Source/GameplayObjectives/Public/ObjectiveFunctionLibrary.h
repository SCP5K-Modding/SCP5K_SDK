#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SimpleObjectiveData.h"
#include "ObjectiveFunctionLibrary.generated.h"

class UObjective;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API UObjectiveFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UObjectiveFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSimpleObjectiveData MakeSimpleObjectiveData(UObjective* Objective);
    
};

