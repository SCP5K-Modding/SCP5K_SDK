#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Electronics -ObjectName=ElectronicScreen -FallbackName=ElectronicScreen
#include "TheatreScreen.h"
#include "ElectronicTheatreScreen.generated.h"

class ATheatreAnomaly;
class UTexture;
class UTheatreScreenComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AElectronicTheatreScreen : public AElectronicScreen, public ITheatreScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> PossessedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> BrokenPossessedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BrokenParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDamageThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTheatreScreenComponent* ScreenComponent;
    
public:
    AElectronicTheatreScreen(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnpossessedByAnomaly(ATheatreAnomaly* TheatreAnomaly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPossessedByAnomaly(ATheatreAnomaly* TheatreAnomaly);
    

    // Fix for true pure virtual functions not being implemented
};

