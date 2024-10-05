#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PandemicProgressionSaveGame.generated.h"

class APandemicPlayerState;

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicProgressionSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Headshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Heals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldsDestroyed;
    
    UPandemicProgressionSaveGame();

    UFUNCTION(BlueprintCallable)
    void Setup(APandemicPlayerState* Player);
    
};

