#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "SAISquad.h"
#include "SAISubsystem.generated.h"

class AActor;
class USAIPointOfInterest;
class USAISquadComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API USAISubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USAIPointOfInterest*> AllInterestPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSAISquad> Squads;
    
    USAISubsystem();

    UFUNCTION(BlueprintCallable)
    void RemovePointOfInterest(USAIPointOfInterest* Point, bool bPreserveOrder);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetRelevantPointOfInterest(FVector Location, FVector Direction, float MaxRadius, float MinRadius, float MaxAngle, bool bUseFirst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USAISquadComponent* GetLeader(FGuid SquadID) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPointOfInterest(USAIPointOfInterest* Point);
    
};

