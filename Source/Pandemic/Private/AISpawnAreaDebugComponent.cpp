#include "AISpawnAreaDebugComponent.h"

UAISpawnAreaDebugComponent::UAISpawnAreaDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
}


