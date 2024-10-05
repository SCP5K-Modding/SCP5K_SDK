#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UIWSCapture.generated.h"

class UBoxComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UPostProcessComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, NotPlaceable)
class UIWS_API AUIWSCapture : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PPVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DrawMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector moveoffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RTPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RTCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC_UIWSWaterBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DrawToPMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicDrawToPMat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComp;
    
public:
    AUIWSCapture(const FObjectInitializer& ObjectInitializer);

};

