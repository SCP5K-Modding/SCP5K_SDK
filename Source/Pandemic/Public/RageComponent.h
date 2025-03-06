#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "OnRageLevelUpdatedDelegateDelegate.h"
#include "RageDamageConfig.h"
#include "RageLevel.h"
#include "RageStimuliConfig.h"
#include "RageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API URageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRageLevelUpdatedDelegate OnRageLevelUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRageLevel> RageLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayDelayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalRageLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOverrideDefaultRage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentLevelNumber, meta=(AllowPrivateAccess=true))
    int32 CurrentLevelNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRageStimuliConfig> StimuliConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRageDamageConfig> DamageConfigOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayDebug;
    
public:
    URageComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetLevelNumberByRageValue(float RageValue, int32& OutRageLevelNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetLevelByLevelNumber(int32 LevelNumber, FRageLevel& OutRageLevel) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRageLevels(TArray<FRageLevel> DesiredRageLevels);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentRage(float DesiredRageValue);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentLevelNumber(int32 DesiredNumber);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerStopTimer(FTimerHandle& InputtedTimerHandle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerStartDecayRageTimer(bool bShouldUseDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerAddRage(float RageToAdd);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentLevelNumber();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRageValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevelNumber() const;
    
};

