#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ObjectiveCompletedDelegateDelegate.h"
#include "ObjectiveManagerUpdatedDelegateDelegate.h"
#include "ObjectiveModifiedDelegateDelegate.h"
#include "ObjectiveSubsystem.generated.h"

class AObjectiveManager;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API UObjectiveSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveManagerUpdatedDelegate OnObjectiveManagerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveModifiedDelegate OnActivateObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveModifiedDelegate OnDeactivateObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveCompletedDelegate OnCompleteObjective;
    
    UObjectiveSubsystem();

    UFUNCTION(BlueprintCallable)
    void RegisterObjectiveManager(AObjectiveManager* NewObjectiveManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AObjectiveManager* GetObjectiveManager() const;
    
};

