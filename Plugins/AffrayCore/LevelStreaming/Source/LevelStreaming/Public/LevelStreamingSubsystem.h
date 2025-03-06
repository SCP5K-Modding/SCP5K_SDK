#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
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

