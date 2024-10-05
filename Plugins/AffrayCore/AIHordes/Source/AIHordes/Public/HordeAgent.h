#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EHordeAgentMovementMode.h"
#include "HordeAgent.generated.h"

class AHorde;
class AHordeAgentController;
class AParty;

UCLASS(Blueprintable)
class AIHORDES_API AHordeAgent : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AHorde* CurrentHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AParty* CurrentParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrawlingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeAgentMovementMode CurrentMovementMode;
    
public:
    AHordeAgent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTickInterval(float Interval);
    
    UFUNCTION(BlueprintCallable)
    void SetParty(AParty* Party);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetMovementMode(EHordeAgentMovementMode MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetHorde(AHorde* Horde);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWanderingSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWalkingSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTickInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRunningSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AParty* GetParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHordeAgentController* GetHordeAgentController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHorde* GetHorde() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHordeAgentMovementMode GetCurrentMovementMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrawlingSpeed();
    
};

