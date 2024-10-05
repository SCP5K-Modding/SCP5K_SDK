#include "GameActionVisualizerComponent.h"

UGameActionVisualizerComponent::UGameActionVisualizerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
}


