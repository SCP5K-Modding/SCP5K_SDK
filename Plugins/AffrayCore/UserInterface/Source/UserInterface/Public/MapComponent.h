#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "MapComponent.generated.h"

class AActor;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USERINTERFACE_API UMapComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReferenceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReferenceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UVReferenceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UVReferenceMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldMinCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldMaxCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TestActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* OverlayTexture;
    
public:
    UMapComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetUVAxisAligned(FVector position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetUV(FVector position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetOverlayTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMinReference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMinCorner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMaxReference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMaxCorner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMap() const;
    
};

