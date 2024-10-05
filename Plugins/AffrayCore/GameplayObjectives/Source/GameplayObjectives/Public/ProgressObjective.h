#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ProgressObjective.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API UProgressObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentProgress, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    UProgressObjective();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetProgress(float NewProgress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentProgress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
};

