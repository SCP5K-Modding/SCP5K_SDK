#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LevelStreamingDelegateDelegate.h"
#include "LevelStreamingSubsystem.generated.h"

class ULevelStreamingComponent;

UCLASS(Blueprintable)
class LEVELSTREAMING_API ULevelStreamingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingDelegate OnLevelFinishedLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingDelegate OnAllLevelsFinishedLoading;
    
    ULevelStreamingSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetMasterStreamingComponent(ULevelStreamingComponent* NewMasterStreamingComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllLevelsLoaded();
    
};

