#pragma once
#include "CoreMinimal.h"
#include "TestingChamberQuestion.h"
#include "TestingChamberQuestionAnsweredMCDelegateDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTestingChamberQuestionAnsweredMCDelegate, const APlayerController*, Player, const FTestingChamberQuestion&, TestingChamberQuestion, const FText&, Answer);

