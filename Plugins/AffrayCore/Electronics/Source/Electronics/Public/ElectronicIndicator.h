#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
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

