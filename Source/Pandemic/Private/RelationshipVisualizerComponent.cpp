#include "RelationshipVisualizerComponent.h"

URelationshipVisualizerComponent::URelationshipVisualizerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
}


