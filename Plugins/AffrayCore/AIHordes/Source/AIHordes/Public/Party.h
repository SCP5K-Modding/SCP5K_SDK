#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Party.generated.h"

class AActor;
class AHorde;
class AHordeAgent;
class AParty;
class APartyController;

UCLASS(Blueprintable)
class AIHORDES_API AParty : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AHorde* CurrentHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AHordeAgent*> Agents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlayerLODDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayerLODDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxAgents;
    
public:
    AParty(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateBounds();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetHorde(AHorde* NewHorde);
    
    UFUNCTION(BlueprintCallable)
    void RemoveParty();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAgent(AHordeAgent* Agent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MergeToParty(AParty* Party);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APartyController* GetPartyController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinTickInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinPlayerLODDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxTickInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxPlayerLODDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetMaxAgents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHorde* GetCurrentHorde() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHordeAgent*> GetAgents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CompareDistance(AParty* Other, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void CalculatePartyLOD(AActor* Reference);
    
    UFUNCTION(BlueprintCallable)
    bool AddAgent(AHordeAgent* Agent);
    
};

