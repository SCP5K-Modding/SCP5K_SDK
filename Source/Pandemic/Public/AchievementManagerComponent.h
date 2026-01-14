#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AchievementManagerComponent.generated.h"

class AAchievementChallenge;
class AGameStateBase;
class APandemicGameStateBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UAchievementManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APandemicGameStateBase* PandemicGameState;
    
public:
    UAchievementManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastUnlockAchievement(const FString& AchievementName);
    
    UFUNCTION(BlueprintCallable)
    void LoadAchievements(AGameStateBase* GameState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AuthorityUnlockAchievement(AAchievementChallenge* Challenge);
    
};

