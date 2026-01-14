#pragma once
#include "CoreMinimal.h"
#include "PlayerChallenge.h"
#include "AchievementChallenge.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API AAchievementChallenge : public APlayerChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementName;
    
public:
    AAchievementChallenge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FString GetAchievementName();
    
};

