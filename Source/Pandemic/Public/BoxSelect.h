#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BoxSelect.generated.h"

class UBoxSelectComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ABoxSelect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxSelectComponent* BoxComponent;
    
    ABoxSelect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SelectObjects();
    
    UFUNCTION(BlueprintCallable)
    void DepositObjects();
    
};

