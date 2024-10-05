#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "NumberObjective.generated.h"

class UNumberObjective;
class UObject;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API UNumberObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdateObjective, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
public:
    UNumberObjective();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMaxAmount(int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAmount(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    static UNumberObjective* CreateNumberObjective(UObject* Outer, FName Name, FText DisplayName, FText Description, int32 NewMaxValue, bool UseTimer, float TimerLength, bool bShouldAutoActivateWithParent, bool bMajorObjective, bool bShouldStartChildren);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddAmount(int32 Amount);
    
};

