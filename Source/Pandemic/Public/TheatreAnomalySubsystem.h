#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "TheatreAnomalySubsystem.generated.h"

class AActor;
class ATheatreAnomaly;
class UTheatreScreenComponent;

UCLASS(Blueprintable)
class PANDEMIC_API UTheatreAnomalySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UTheatreAnomalySubsystem();

    UFUNCTION(BlueprintCallable)
    bool MoveTowardScreen(UTheatreScreenComponent* Screen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnomalyAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATheatreAnomaly* GetTheatreAnomaly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTheatreScreenComponent*> GetScreens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTheatreScreenComponent* GetClosestScreen(FVector position, float AcceptedDistance, bool bIgnoreVisibility) const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceMoveToScreen(UTheatreScreenComponent* Screen);
    
    UFUNCTION(BlueprintCallable)
    bool AlertToScreen(UTheatreScreenComponent* Screen, AActor* EventInstigator, FVector Location);
    
};

