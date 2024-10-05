#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EObjectiveTriggerAction.h"
#include "ObjectiveTrigger.generated.h"

class AObjectiveManager;
class UBoxComponent;
class UObjective;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API AObjectiveTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveTriggerAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnObjectiveActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnObjectiveDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayOnUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjectiveManager* ObjectiveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AObjectiveTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Init(AObjectiveManager* InObjectiveManager);
    
public:
    UFUNCTION(BlueprintCallable)
    void Disable(UObjective* InObjective);
    
    UFUNCTION(BlueprintCallable)
    bool AffectObjective(UObjective* InObjective);
    
};

