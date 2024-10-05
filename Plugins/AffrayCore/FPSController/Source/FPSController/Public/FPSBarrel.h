#pragma once
#include "CoreMinimal.h"
#include "FPSAttachment.h"
#include "FPSBarrel.generated.h"

class UArrowComponent;
class UFPSBarrelData;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSBarrel : public AFPSAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSBarrelData* BarrelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* BarrelEnd;
    
public:
    AFPSBarrel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSBarrelData* GetBarrelData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArrowComponent* GetBarrel() const;
    
};

