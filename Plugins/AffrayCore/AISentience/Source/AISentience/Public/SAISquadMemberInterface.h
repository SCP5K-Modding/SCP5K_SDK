#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

