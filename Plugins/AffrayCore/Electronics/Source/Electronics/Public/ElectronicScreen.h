#pragma once
#include "CoreMinimal.h"
#include "ElectronicLight.h"
#include "ElectronicScreen.generated.h"

class UTexture;

UCLASS(Blueprintable)
class ELECTRONICS_API AElectronicScreen : public AElectronicLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> OverrideTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> BrokenTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetLightTextureFromScreen;
    
    AElectronicScreen(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTexture();
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingViewed() const;
    
    UFUNCTION(BlueprintCallable)
    void AssetLoaded();
    
};

