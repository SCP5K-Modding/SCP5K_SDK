#include "SAIPerceptionComponent.h"
#include "Templates/SubclassOf.h"

USAIPerceptionComponent::USAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USAIPerceptionComponent::GetHostileActorsBySenseNew(TSubclassOf<UAISense> SenseToFilterBy, TArray<AActor*>& OutActors) const {
}


