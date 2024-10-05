#include "SAICoverDebugPrimitiveComponent.h"

USAICoverDebugPrimitiveComponent::USAICoverDebugPrimitiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->AlwaysLoadOnClient = false;
}


