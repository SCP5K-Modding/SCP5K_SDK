#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SAISquadMemberInterface.generated.h"

class USAISquadComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class USAISquadMemberInterface : public UInterface {
    GENERATED_BODY()
};

class ISAISquadMemberInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USAISquadComponent* GetSquadComponent() const;
    
};

