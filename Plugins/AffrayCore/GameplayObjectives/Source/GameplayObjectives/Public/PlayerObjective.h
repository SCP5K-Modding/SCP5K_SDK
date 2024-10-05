#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "PlayerObjective.generated.h"

class UObject;
class UPlayerObjective;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API UPlayerObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RequiredPlayers, meta=(AllowPrivateAccess=true))
    int32 RequiredPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPlayers, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRequiresPlayersForTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStopUnderRequiredPlayers;
    
public:
    UPlayerObjective();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRequiredPlayers(int32 NewRequiredPlayers);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RequiredPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPlayers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredAmountPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmountPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    static UPlayerObjective* CreatePlayerObjective(UObject* Outer, FName Name, FText DisplayName, FText Description, int32 RequiredAmountPlayers, bool UseTimer, float TimerLength, bool RequirePlayersForTimerTick, bool bShouldAutoActivateWithParent, bool bMajorObjective, bool bShouldStartChildren);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayer();
    
};

