#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GenericGameEvent.generated.h"

class UGenericGameEvent;

UCLASS(Blueprintable, EditInlineNew, Transient)
class GAMEEVENTBUS_API UGenericGameEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Subject;
    
    UGenericGameEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGenericGameEvent* MakeGenericGameEvent(UObject* InInstigator, UObject* InSubject, const FGameplayTagContainer& InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakGenericGameEvent(FGameplayTagContainer& OutID, UObject*& OutInstigator, UObject*& OutSubject) const;
    
};

