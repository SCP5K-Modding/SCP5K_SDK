#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModularAssets -ObjectName=ModularSplineAsset -FallbackName=ModularSplineAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=RandomScenarios -ObjectName=ScenarioItem -FallbackName=ScenarioItem
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

