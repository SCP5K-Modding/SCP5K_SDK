#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameAction.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class GAMEACTIONS_API UGameAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecuteDelay;
    
    UGameAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    bool OnExecute(UObject* WorldContextObject, AActor* Subject, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ExecuteDelayed(UObject* WorldContextObject, AActor* Subject, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Execute(UObject* WorldContextObject, AActor* Subject, AActor* Instigator);
    
};

