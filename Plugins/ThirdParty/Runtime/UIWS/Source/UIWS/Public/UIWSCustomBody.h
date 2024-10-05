#pragma once
#include "CoreMinimal.h"
#include "UIWSWaterBody.h"
#include "UIWSCustomBody.generated.h"

class UBoxComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UIWS_API AUIWSCustomBody : public AUIWSWaterBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CustomStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CustomMeshComp;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CustomWaterVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowCameraUnder;
    
public:
    AUIWSCustomBody(const FObjectInitializer& ObjectInitializer);

};

