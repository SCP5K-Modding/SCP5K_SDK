#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESCP173HallucinationSeverity.h"
#include "HallucinogenComponent.h"
#include "SCP173HallucinogenSoundInfo.h"
#include "Templates/SubclassOf.h"
#include "SCP173HallucinogenComponent.generated.h"

class UCurveFloat;
class UFMODEvent;
class USCP173Hallucination;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API USCP173HallucinogenComponent : public UHallucinogenComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HallucinationAdditionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USCP173Hallucination>, ESCP173HallucinationSeverity> HallucinationPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCP173HallucinationSeverity, UFMODEvent*> Sounds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SeverityCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SoundsToPlay, meta=(AllowPrivateAccess=true))
    TArray<FSCP173HallucinogenSoundInfo> SoundsToPlay;
    
public:
    USCP173HallucinogenComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlaySound(ESCP173HallucinationSeverity SoundType, const FVector& TargetLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SoundsToPlay();
    
};

