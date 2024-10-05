#include "FPSBallistics.h"
#include "Templates/SubclassOf.h"

UFPSBallistics::UFPSBallistics() {
}

bool UFPSBallistics::VerifyBallistics(AActor* User, FProjectileData Projectile, const TArray<TSoftObjectPtr<UBallisticPhysicsMaterial>>& Physmats, float TimeStep, float Time, int32 Index, bool bFilterHits, float Drag, float MaxRange, FVector StartingPosition, FVector Direction, const TArray<FBallisticHitData>& Hits) {
    return false;
}

void UFPSBallistics::SpawnBallisticEffects(TArray<FBallisticProjectileData> Projectiles, const TArray<TSoftObjectPtr<UBallisticPhysicsMaterial>>& Physmats, bool bTwoSidedDecals, UStaticMesh* TransparentDecalMesh) {
}

bool UFPSBallistics::SimulateBallistics(AActor* User, FProjectileData Projectile, const TArray<TSoftObjectPtr<UBallisticPhysicsMaterial>>& Physmats, float TimeStep, float Time, int32 Index, bool bFilterHits, float Drag, float MaxRange, FVector StartingPosition, FVector Direction, TArray<FBallisticHitData>& OutHits) {
    return false;
}

FVector UFPSBallistics::GetResultingImpactVelocity(FVector ProjectileVelocity, FVector ImpactNormal, float ProjectilePiercing, float ProjectileMass, float SurfaceHardness, float SurfaceThickness, float SurfaceFriction, float SurfaceRicochetChance) {
    return FVector{};
}

float UFPSBallistics::GetBallisticDamage(float Distance, float Velocity, float IdealRange, float MaxRange, float ProjectileVelocity, float Damage) {
    return 0.0f;
}

bool UFPSBallistics::DidHitSurface(float HitChance, FRandomStream& Stream) {
    return false;
}

uint8 UFPSBallistics::ConvertToByte(float Input, float Max) {
    return 0;
}

float UFPSBallistics::ConvertFromByte(uint8 Input, float Max) {
    return 0.0f;
}

float UFPSBallistics::CalculateSpread(float Spread, FRandomStream& Stream) {
    return 0.0f;
}

void UFPSBallistics::CalculateBallistics(AActor* User, float ProjectileMass, float ProjectilePiercing, FRandomStream& Stream, FVector position, FVector Velocity, float TimeStep, float Drag, float Time, bool bWasHit, FVector& OutPosition, FVector& OutVelocity, float& OutDistance, FHitResult& OutHit, float& OutTime) {
}

void UFPSBallistics::ApplyBallisticDamage(AActor* User, TArray<FBallisticProjectileData> Projectiles, float IdealRange, float MaxRange, float ProjectileVelocity, float Damage, TSubclassOf<UDamageType> DamageType) {
}


