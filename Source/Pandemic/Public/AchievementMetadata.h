#pragma once
#include "CoreMinimal.h"
#include "PlayerChallengeMetadata.h"
#include "AchievementMetadata.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UAchievementMetadata : public UPlayerChallengeMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ValidMapNames;
    
    UAchievementMetadata();

};

