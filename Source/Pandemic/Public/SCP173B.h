#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESCP173BSound.h"
#include "SCP173BSoundInfo.h"
#include "SCP173Base.h"
#include "Templates/SubclassOf.h"
#include "SCP173B.generated.h"

class AActor;
class UCurveFloat;
class UDamageType;
class UFMODEvent;
class USCP173HallucinogenComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP173B : public ASCP173Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCP173HallucinogenComponent* HallucinogenComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESCP173BSound, UFMODEvent*> Sounds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GraceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMovementSoundDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAttemptingKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SoundsToPlay, meta=(AllowPrivateAccess=true))
    TArray<FSCP173BSoundInfo> SoundsToPlay;
    
public:
    ASCP173B(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlaySound(ESCP173BSound SoundType, const FVector& TargetLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SoundsToPlay();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void KillTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttemptingKill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentKillTarget() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelKill();
    
};

