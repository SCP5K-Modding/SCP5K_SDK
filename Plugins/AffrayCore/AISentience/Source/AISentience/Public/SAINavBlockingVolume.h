#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "GameFramework/Volume.h"
#include "SAINavBlockingVolume.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API ASAINavBlockingVolume : public AVolume, public INavRelevantInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaskFillCollisionUnderneathForNavmesh;
    
public:
    ASAINavBlockingVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

