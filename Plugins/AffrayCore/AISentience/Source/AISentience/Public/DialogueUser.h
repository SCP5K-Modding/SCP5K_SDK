#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DialogueUser.generated.h"

class UDialogueComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UDialogueUser : public UInterface {
    GENERATED_BODY()
};

class IDialogueUser : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDialogueComponent* GetDialogueComponent();
    
};

