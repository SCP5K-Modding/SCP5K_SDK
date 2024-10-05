#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SelectedMap.h"
#include "MapsFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UMapsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMapsFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SelectedMapToString(const FSelectedMap& Map);
    
};

