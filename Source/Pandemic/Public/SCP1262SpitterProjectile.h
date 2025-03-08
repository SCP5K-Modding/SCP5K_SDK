#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BallisticHitData.h"
#include "Poolable.h"
#include "Templates/SubclassOf.h"
#include "SCP1262SpitterProjectile.generated.h"

class UDamageType;
class UFMODEvent;
class UNiagaraSystem;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class USurfaceDataMap;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP1262SpitterProjectile : public AActor, public IPoolable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SuppressionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostHitPawnLifespan;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HitData, meta=(AllowPrivateAccess=true))
    FBallisticHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bShattered, meta=(AllowPrivateAccess=true))
    bool bShattered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USurfaceDataMap* SurfaceDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ShatterSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ShatterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShatterChance;
    
public:
    ASCP1262SpitterProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProjectileStopped(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HitData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bShattered();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProjectileMovementComponent* GetMovementComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

