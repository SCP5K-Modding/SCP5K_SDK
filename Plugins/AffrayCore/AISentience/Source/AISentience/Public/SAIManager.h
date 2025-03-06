#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AISquad.h"
#include "SAIManager.generated.h"

class ACharacter;
class ASAIPatrolPath;
class UBillboardComponent;
class USAIComponent;
class USAIPointOfInterest;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicPatrols;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamicSquads;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* EditorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USAIPointOfInterest*> AllInterestPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASAIPatrolPath*> AllPatrols;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISquad> AllSquads;
    
public:
    ASAIManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemovePointOfInterest(USAIPointOfInterest* Point);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSquad(ACharacter* SquadLeader);
    
    UFUNCTION(BlueprintCallable)
    void InitializePatrol(ASAIPatrolPath* Patrol);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAI(USAIComponent* SAI);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetRelevantPointOfInterest(FVector Location, FVector Direction, float MaxRadius, float MinRadius, float MaxAngle, bool bUseFirst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USAIPointOfInterest*> GetInterestPoints() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPointOfInterest(USAIPointOfInterest* Point);
    
};

