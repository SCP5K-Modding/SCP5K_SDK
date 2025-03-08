#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Suppressable.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class USuppressable : public UInterface {
    GENERATED_BODY()
};

class ISuppressable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Suppressed(FVector Location, AActor* Suppressor, bool bIsSuperSonic, float SuppressionAmount);
    
};

