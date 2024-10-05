#pragma once
#include "CoreMinimal.h"
#include "FPSAttachment.h"
#include "FPSSight.generated.h"

class UArrowComponent;
class UFPSSightData;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSSight : public AFPSAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSSightData* SightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* ParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SightDirection;
    
public:
    AFPSSight(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFPSSightData* GetSightData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArrowComponent* GetSight() const;
    
};

