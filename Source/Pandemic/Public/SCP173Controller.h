#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "SCP173NavmeshTarget.h"
#include "SCP173Controller.generated.h"

class ASCP173Base;
class UAITaskManagerComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP173Controller : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAITaskManagerComponent* TaskManagerComponent;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCP173NavmeshTarget SCP173NavmeshTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASCP173Base> SCP173;
    
public:
    ASCP173Controller(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASCP173Base* GetSCP173() const;
    
};

