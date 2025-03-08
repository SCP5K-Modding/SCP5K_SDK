#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EPlayerSpawnType.h"
#include "PandemicPlayerStart.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API APandemicPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerSpawnType SpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    APandemicPlayerStart(const FObjectInitializer& ObjectInitializer);

};

