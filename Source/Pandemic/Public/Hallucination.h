#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HallucinationTickFunction.h"
#include "Hallucination.generated.h"

class AController;
class APawn;
class UHallucinogenComponent;

UCLASS(Blueprintable)
class PANDEMIC_API UHallucination : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHallucinationTickFunction PrimaryHallucinationTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> HallucinatingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HallucinationDelay;
    
public:
    UHallucination();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHallucinationDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHallucinationAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidHallucination(float DeltaTime) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHallucinatingController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTickInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHallucinogenComponent* GetHallucinogenComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHallucinationDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHallucinationDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetHallucinatingPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetHallucinatingController() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Destroy();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyHallucinationEffects(float DeltaTime);
    
};

