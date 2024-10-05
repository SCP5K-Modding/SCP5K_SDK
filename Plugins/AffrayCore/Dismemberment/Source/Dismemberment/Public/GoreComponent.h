#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GoreHitData.h"
#include "GoreMesh.h"
#include "ShortVector.h"
#include "GoreComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UFMODEvent;
class UFXSystemAsset;
class UMaterialInstanceDynamic;
class UObject;
class UPrimitiveComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DISMEMBERMENT_API UGoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGoreMesh> GoreMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DefaultGoreEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> DefaultGoreParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* GoreDataTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyGoreOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoreDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnGoreEffectsWhenOffscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayGoreSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnGoreEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeBlood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpandBlood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBloodExpandSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodExpandSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> GoreBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShortVector> GorePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShortVector> GoreNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShortVector> GoreTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShortVector> GoreEllipsePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShortVector> GoreEllipseXBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShortVector> GoreEllipseYBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastHit, meta=(AllowPrivateAccess=true))
    FGoreHitData LastHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKismetSystemLibrary::FOnAssetLoaded OnAssetLoaded;
    
public:
    UGoreComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTexture(bool bUpdatePoints, bool bUpdateNormals, bool bUpdateElipses);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMaxIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateGorePointSize(int32 Index, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGorePointAlpha(int32 Index, float Alpha);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGorePoint(int32 Index, FName BoneName, FVector position, FVector Normal, FVector Tangent, float Scale, float DecalScale, float BloodAlpha, bool bUpdateTexture);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGoreEllipse(int32 Index, FVector position, FRotator Rotation, FVector Scale, bool bUpdateTexture);
    
    UFUNCTION(BlueprintCallable)
    bool TryAddGoreMesh(FVector position, float Damage, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastHit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Initialize(bool bForceInitialize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxEllipsoids();
    
    UFUNCTION(BlueprintCallable)
    void Deinitialize();
    
public:
    UFUNCTION(BlueprintCallable)
    void AssetLoaded(UObject* Loaded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGorePoint(FName BoneName, FVector position, FVector Normal, FVector Tangent, float Scale, float DecalScale, float BloodAlpha, bool bUpdateTexture);
    
    UFUNCTION(BlueprintCallable)
    void AddGoreEllipse(FVector position, FRotator Rotation, FVector Scale, bool bUpdateTexture);
    
};

