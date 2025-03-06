#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "BallisticHitData.h"
#include "BallisticProjectileData.h"
#include "ProjectileData.h"
#include "Templates/SubclassOf.h"
#include "FPSBallistics.generated.h"

class AActor;
class UBallisticPhysicsMaterial;
class UDamageType;
class UStaticMesh;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UFPSBallistics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFPSBallistics();

    UFUNCTION(BlueprintCallable)
    static bool VerifyBallistics(AActor* User, FProjectileData Projectile, const TArray<TSoftObjectPtr<UBallisticPhysicsMaterial>>& Physmats, float TimeStep, float Time, int32 Index, bool bFilterHits, float Drag, float MaxRange, FVector StartingPosition, FVector Direction, const TArray<FBallisticHitData>& Hits);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnBallisticEffects(TArray<FBallisticProjectileData> Projectiles, const TArray<TSoftObjectPtr<UBallisticPhysicsMaterial>>& Physmats, bool bTwoSidedDecals, UStaticMesh* TransparentDecalMesh);
    
    UFUNCTION(BlueprintCallable)
    static bool SimulateBallistics(AActor* User, FProjectileData Projectile, const TArray<TSoftObjectPtr<UBallisticPhysicsMaterial>>& Physmats, float TimeStep, float Time, int32 Index, bool bFilterHits, float Drag, float MaxRange, FVector StartingPosition, FVector Direction, TArray<FBallisticHitData>& OutHits);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCloseToPoints(FVector Point, const TArray<FVector>& Points, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetResultingImpactVelocity(FVector ProjectileVelocity, FVector ImpactNormal, float ProjectilePiercing, float ProjectileMass, float SurfaceHardness, float SurfaceThickness, float SurfaceFriction, float SurfaceRicochetChance, bool& bIsRicochet);
    
    UFUNCTION(BlueprintCallable)
    static float GetBallisticDamage(float Distance, float Velocity, float IdealRange, float MaxRange, float ProjectileVelocity, float Damage);
    
    UFUNCTION(BlueprintCallable)
    static bool DidHitSurface(float HitChance, FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable)
    static uint8 ConvertToByte(float Input, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertFromByte(uint8 Input, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateSpread(float Spread, FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateBallistics(AActor* User, float ProjectileMass, float ProjectilePiercing, FRandomStream& Stream, FVector position, FVector Velocity, float TimeStep, float Drag, float Time, bool bWasHit, FVector& OutPosition, FVector& OutVelocity, float& OutDistance, FHitResult& OutHit, float& OutTime, bool& bOutWasRicochet);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBallisticDamage(AActor* User, TArray<FBallisticProjectileData> Projectiles, float IdealRange, float MaxRange, float ProjectileVelocity, float Damage, TSubclassOf<UDamageType> DamageType);
    
};

