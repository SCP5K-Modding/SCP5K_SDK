#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ChangedSquadMCDelegateDelegate.h"
#include "SAISquadComponent.generated.h"

class AController;
class APawn;
class USAISquadComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAISquadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedSquadMCDelegate ChangedSquadMCDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressDamageableWarning;
    
public:
    USAISquadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLeaveSquad();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerJoinSquad(FGuid NewSquadID, bool bAsSquadLeader);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSquadChanged(FGuid NewSquadID, bool bAsSquadLeader);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USAISquadComponent* GetLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllVisibleSquadMembers(float VisionCone, TArray<USAISquadComponent*>& OutVisibleSquadMembers) const;
    
};

