#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElectronicLight.h"
#include "ElectronicIndicator.generated.h"

UCLASS(Blueprintable)
class ELECTRONICS_API AElectronicIndicator : public AElectronicLight {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EnabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledColor;
    
public:
    AElectronicIndicator(const FObjectInitializer& ObjectInitializer);

};

