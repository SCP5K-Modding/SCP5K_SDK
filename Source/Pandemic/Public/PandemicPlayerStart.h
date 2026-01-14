#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EPlayerSpawnType.h"
#include "PandemicPlayerStart.generated.h"

class APandemicPlayerState;

UCLASS(Blueprintable)
class PANDEMIC_API APandemicPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerSpawnType SpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomSpawnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomSpawnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasRecentlyUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    APandemicPlayerStart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnUse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleByPlayers(const TArray<APandemicPlayerState*> Players) const;
    
};

