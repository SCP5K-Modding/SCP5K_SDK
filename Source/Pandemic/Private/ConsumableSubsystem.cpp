#include "ConsumableSubsystem.h"

UConsumableSubsystem::UConsumableSubsystem() {
    this->TargetAmmoPercentage = 0.00f;
    this->TargetHealthPercentage = 0.00f;
    this->PartialAmmoPickupWeight = 0.00f;
    this->FullAmmoPickupWeight = 0.00f;
    this->MinAdditionalMags = 0;
    this->MaxAdditionalMags = 0;
    this->MinAdditionalHealth = 0;
    this->MaxAdditionalHealth = 0;
    this->HealthPickupWeight = 0.00f;
    this->NearbyConsumableRange = 0.00f;
}

void UConsumableSubsystem::UnregisterHealthPickup(UConsumableComponent* Consumable) {
}

void UConsumableSubsystem::UnregisterAmmoPickup(UConsumableComponent* Consumable) {
}

void UConsumableSubsystem::RegisterHealthPickup(UConsumableComponent* Consumable) {
}

void UConsumableSubsystem::RegisterAmmoPickup(UConsumableComponent* Consumable) {
}

int32 UConsumableSubsystem::QueryNeededHealth(AFPSCharacterBase* InteractingCharacter) {
    return 0;
}

int32 UConsumableSubsystem::QueryNeededAmmo(AFPSCharacterBase* InteractingCharacter) {
    return 0;
}

void UConsumableSubsystem::OverwriteTargetHealth(float NewPercentage) {
}

void UConsumableSubsystem::OverwriteTargetAmmo(float NewPercentage) {
}

void UConsumableSubsystem::OverwriteNearbyConsumableRange(float NewRange) {
}

void UConsumableSubsystem::OverwriteMinMaxAdditionalMags(float NewMin, float NewMax) {
}

void UConsumableSubsystem::OverwriteMinMaxAdditionalHealth(float NewMin, float NewMax) {
}

float UConsumableSubsystem::GetPlayersTotalHealthPercentage() {
    return 0.0f;
}

float UConsumableSubsystem::GetPlayersTotalAmmoPercentage() {
    return 0.0f;
}

TArray<UConsumableComponent*> UConsumableSubsystem::GetNearbyConsumables(AFPSCharacterBase* InteractingCharacter, EConsumableType ConsumableType) {
    return TArray<UConsumableComponent*>();
}

int32 UConsumableSubsystem::CalculateNeededConsumables(AFPSCharacterBase* InteractingCharacter, EConsumableType ConsumableType) {
    return 0;
}


