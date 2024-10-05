#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "AgentSpawn.h"
#include "HordeAgentDelegateDelegate.h"
#include "HordeDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "Horde.generated.h"

class AActor;
class AHorde;
class AHordeAgent;
class AHordeController;
class AParty;
class USphereComponent;

UCLASS(Blueprintable)
class AIHORDES_API AHorde : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHordeDelegate OnBeginAlert;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHordeDelegate OnEndAlert;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHordeAgentDelegate OnAgentRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHordeAgentDelegate OnAgentAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AParty> DefaultPartyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAgentSpawn> AgentClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AHordeAgent*> Agents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AParty*> Parties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartyMergeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
public:
    AHorde(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateBounds();
    
    UFUNCTION(BlueprintCallable)
    AHordeAgent* SpawnRandomAgent(FVector position, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    AParty* SpawnParty(TArray<AHordeAgent*> Members);
    
    UFUNCTION(BlueprintCallable)
    AHordeAgent* SpawnAgentInRadius();
    
    UFUNCTION(BlueprintCallable)
    AHordeAgent* SpawnAgent(TSubclassOf<AHordeAgent> Class, FVector position, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveParty(AParty* Party);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveAgent(AHordeAgent* Agent);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    bool MergeToHorde(AHorde* NewHorde);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void MergeParties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlert() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AParty*> GetParties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHordeController* GetHordeController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHordeAgent*> GetAgents();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EndAlert();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void BeginAlert(const TArray<APawn*>& Targets);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddParty(AParty* Party);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddAgent(AHordeAgent* Agent, AParty* Party);
    
};

