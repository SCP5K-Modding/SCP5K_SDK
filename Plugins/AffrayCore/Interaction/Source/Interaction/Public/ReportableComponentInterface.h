#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
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

