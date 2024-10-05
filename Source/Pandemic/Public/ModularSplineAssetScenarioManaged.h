#pragma once
#include "CoreMinimal.h"
#include "ModularSplineAsset.h"
#include "ScenarioItem.h"
#include "ModularSplineAssetScenarioManaged.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API AModularSplineAssetScenarioManaged : public AModularSplineAsset, public IScenarioItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPreviewingMovement;
    
public:
    AModularSplineAssetScenarioManaged(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetMovement();
    
    UFUNCTION(BlueprintCallable)
    void PreviewMovement();
    

    // Fix for true pure virtual functions not being implemented
};

