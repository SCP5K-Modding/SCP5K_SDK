#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "HallucinogenComponent.generated.h"

class APawn;
class UHallucination;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UHallucinogenComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UHallucination*> Hallucinations;
    
public:
    UHallucinogenComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldHallucinationBeRemoved(const UHallucination* Hallucination) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveHallucination(UHallucination* Hallucination);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveAllHallucinationsFromPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UHallucination* CreateHallucination(TSubclassOf<UHallucination> HallucinationClass, APawn* TargetPawn, float CustomDuration, float CustomTickInterval, float CustomDelay);
    
};

