#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameplayTagContainer.h"
#include "CosmeticProfileSet.h"
#include "CosmeticsSaveGame.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UCosmeticsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCosmeticProfileSet> ProfileSets;
    
    UCosmeticsSaveGame();

};

