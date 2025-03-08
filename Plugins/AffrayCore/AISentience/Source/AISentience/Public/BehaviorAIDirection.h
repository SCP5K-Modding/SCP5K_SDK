#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardAssetProvider.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SAIBlackboardKeyValueSelector.h"
#include "SAIDirection.h"
#include "BehaviorAIDirection.generated.h"

class AActor;
class UBehaviorTree;
class UBlackboardData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AISENTIENCE_API UBehaviorAIDirection : public USAIDirection, public IBlackboardAssetProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BehaviorTreeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicBehaviorKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicBehaviorInstigatorKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestartBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BlackboardBoolValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> BlackboardVectorValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> BlackboardActorValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSAIBlackboardKeyValueSelector> BlackboardValues;
    
public:
    UBehaviorAIDirection();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UBlackboardData* GetBlackboardAsset() const override PURE_VIRTUAL(GetBlackboardAsset, return NULL;);
    
};

