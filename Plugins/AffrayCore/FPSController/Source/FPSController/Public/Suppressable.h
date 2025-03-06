#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
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

