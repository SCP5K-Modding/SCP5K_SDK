#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "PlayerChallengeMetadata.generated.h"

class APlayerChallenge;
class UFlowAsset;
class UObject;

UCLASS(Blueprintable)
class PANDEMIC_API UPlayerChallengeMetadata : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengeTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengeDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerChallenge> ChallengeBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFlowAsset> ChallengeFlow;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChallengeIDTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChallengeTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesFlowAsset;
    
    UPlayerChallengeMetadata();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    APlayerChallenge* InstantiateChallenge(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CancelChallenge(APlayerChallenge* ChallengeToCancel);
    
};

