#pragma once
#include "CoreMinimal.h"
#include "PlayerTriggerVolume.h"
#include "ESpawnTriggerMode.h"
#include "SpawnerTrigger.generated.h"

class AAISpawnArea;
class URelationshipVisualizerComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASpawnerTrigger : public APlayerTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnArea*> SpawnAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnTriggerMode TriggerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowVisibleSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URelationshipVisualizerComponent* VisualizerComponent;
    
    ASpawnerTrigger(const FObjectInitializer& ObjectInitializer);

};

