#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EConsumableType.h"
#include "ConsumableSubsystem.generated.h"

class AFPSCharacterBase;
class UConsumableComponent;

UCLASS(Blueprintable)
class PANDEMIC_API UConsumableSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UConsumableComponent*> AmmoPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UConsumableComponent*> HealthPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAmmoPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartialAmmoPickupWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullAmmoPickupWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAdditionalMags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAdditionalMags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAdditionalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAdditionalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPickupWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyConsumableRange;
    
public:
    UConsumableSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterHealthPickup(UConsumableComponent* Consumable);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAmmoPickup(UConsumableComponent* Consumable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHealthPickup(UConsumableComponent* Consumable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAmmoPickup(UConsumableComponent* Consumable);
    
    UFUNCTION(BlueprintCallable)
    int32 QueryNeededHealth(AFPSCharacterBase* InteractingCharacter, float OverrideConsumableRange);
    
    UFUNCTION(BlueprintCallable)
    int32 QueryNeededAmmo(AFPSCharacterBase* InteractingCharacter, float OverrideConsumableRange);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteTargetHealth(float NewPercentage);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteTargetAmmo(float NewPercentage);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteNearbyConsumableRange(float NewRange);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteMinMaxAdditionalMags(float NewMin, float NewMax);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteMinMaxAdditionalHealth(float NewMin, float NewMax);
    
    UFUNCTION(BlueprintCallable)
    float GetPlayersTotalHealthPercentage();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayersTotalAmmoPercentage();
    
    UFUNCTION(BlueprintCallable)
    TArray<UConsumableComponent*> GetNearbyConsumables(AFPSCharacterBase* InteractingCharacter, EConsumableType ConsumableType, float OverrideConsumableRange);
    
    UFUNCTION(BlueprintCallable)
    int32 CalculateNeededConsumables(AFPSCharacterBase* InteractingCharacter, EConsumableType ConsumableType, float OverrideConsumableRange);
    
};

