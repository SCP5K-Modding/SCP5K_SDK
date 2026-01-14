#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "StoryletPostcondition.h"
#include "StoryletStateAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STORYLETS_API UStoryletStateAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoryletPostcondition> StateChanges;
    
    UStoryletStateAction();

};

