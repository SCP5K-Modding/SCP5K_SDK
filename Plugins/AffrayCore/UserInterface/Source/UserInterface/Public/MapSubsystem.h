#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MapSubsystem.generated.h"

class UMapComponent;

UCLASS(Blueprintable)
class USERINTERFACE_API UMapSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UMapSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveMapByName(FName MapName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMap(UMapComponent* Map);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapComponent* GetMap(FName MapName) const;
    
    UFUNCTION(BlueprintCallable)
    void AddMap(UMapComponent* Map);
    
};

