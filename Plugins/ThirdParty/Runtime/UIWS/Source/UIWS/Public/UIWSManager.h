#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/CollisionProfile.h"
#include "UIWSManager.generated.h"

class AUIWSWaterBody;
class UMaterialParameterCollection;
class UPostProcessComponent;

UCLASS(Blueprintable)
class UIWS_API AUIWSManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateLightInfo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSpawnGlobalPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ContinuousLightUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CenterSimOnPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CustomCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WindVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindTurbulence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CausticBrightnessMult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC_UIWSWaterBodies;
    
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AUIWSWaterBody>> ManagedWaterBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIWSWaterBody* CurrentPriorityBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIWSWaterBody* LastPriorityBody;
    
public:
    AUIWSManager(const FObjectInitializer& ObjectInitializer);

};

