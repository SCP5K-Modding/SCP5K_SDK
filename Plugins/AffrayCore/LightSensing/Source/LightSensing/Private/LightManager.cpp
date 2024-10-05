#include "LightManager.h"

ALightManager::ALightManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CacheDistance = 300.00f;
    this->CacheTime = 1.00f;
    this->DefaultHandleAllocationSize = 32;
    this->LightIntensityThreshold = 0.20f;
    this->LightVisibilityOffset = 10.00f;
    this->bUseSun = false;
    this->SunIntensity = 1.00f;
    this->AmbientIntensity = 0.20f;
    this->Sun = NULL;
}

bool ALightManager::RemoveUserFromHandle(UObject* User, AActor* Subject) {
    return false;
}

bool ALightManager::RemoveEventFromHandle(UObject* User, AActor* Subject, FLightHandleUpdatedEvent Event) {
    return false;
}

bool ALightManager::GetLightIntensityByHandle(UObject* User, AActor* Subject, float& Intensity) {
    return false;
}

bool ALightManager::GetLightIntensity(FVector position, float& Intensity) {
    return false;
}

bool ALightManager::AddEventToHandle(UObject* User, AActor* Subject, FLightHandleUpdatedEvent Event) {
    return false;
}


