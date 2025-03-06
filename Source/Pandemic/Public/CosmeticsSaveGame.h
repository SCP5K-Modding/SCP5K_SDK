#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
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

