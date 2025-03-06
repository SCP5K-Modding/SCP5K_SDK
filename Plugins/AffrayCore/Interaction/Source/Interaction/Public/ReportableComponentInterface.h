#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ReportableComponentInterface.generated.h"

class UReportableComponent;

UINTERFACE(Blueprintable)
class UReportableComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IReportableComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UReportableComponent* GetReportableComponent();
    
};

