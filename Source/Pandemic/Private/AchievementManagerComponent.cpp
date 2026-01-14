#include "AchievementManagerComponent.h"

UAchievementManagerComponent::UAchievementManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PandemicGameState = NULL;
}

void UAchievementManagerComponent::MulticastUnlockAchievement_Implementation(const FString& AchievementName) {
}

void UAchievementManagerComponent::LoadAchievements(AGameStateBase* GameState) {
}

void UAchievementManagerComponent::AuthorityUnlockAchievement(AAchievementChallenge* Challenge) {
}


