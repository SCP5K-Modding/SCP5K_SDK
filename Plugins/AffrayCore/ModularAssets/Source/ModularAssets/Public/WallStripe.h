#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WallStripe.generated.h"

class UMaterialInterface;
class USplineMeshComponent;
class UStaticMesh;
class UWallStripeMetadata;
class UWallStripeSplineComponent;

UCLASS(Blueprintable)
class MODULARASSETS_API AWallStripe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWallStripeSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWallStripeMetadata* WallStripeSplineMetadata;
    
public:
    AWallStripe(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetScaleAtSplinePoint(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetFlipSideAtSplinePoint(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetCornerRadiusAtSplinePoint(int32 PointIndex);
    
};

