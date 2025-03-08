#include "SAIMapInteraction.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASAIMapInteraction::ASAIMapInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MapInteraction = (USceneComponent*)RootComponent;
    this->InteractionRange = CreateDefaultSubobject<UBoxComponent>(TEXT("Range"));
    this->ChanceToInteract = 0.50f;
    this->bShouldLoop = false;
    this->InteractionRange->SetupAttachment(RootComponent);
}

bool ASAIMapInteraction::IsLooping() const {
    return false;
}

FAIInteractionAnimations ASAIMapInteraction::GetInteractionAnims() const {
    return FAIInteractionAnimations{};
}

float ASAIMapInteraction::GetChanceToInteract() const {
    return 0.0f;
}


