#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "SimpleHitData.h"
#include "ShootableGlass.generated.h"

class AActor;
class AController;
class UDamageType;
class UFMODEvent;
class UNiagaraSystem;
class UPrimitiveComponent;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UShootableGlass : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShatteredMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ShatteredMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ShatterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ShatterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HitData, meta=(AllowPrivateAccess=true))
    FSimpleHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBroken, meta=(AllowPrivateAccess=true))
    bool bIsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
public:
    UShootableGlass(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBroken();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HitData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnPointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
};

