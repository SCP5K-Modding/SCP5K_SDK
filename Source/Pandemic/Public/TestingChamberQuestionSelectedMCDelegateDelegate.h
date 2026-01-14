#pragma once
#include "CoreMinimal.h"
#include "TestingChamberQuestion.h"
#include "TestingChamberQuestionSelectedMCDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTestingChamberQuestionSelectedMCDelegate, const FTestingChamberQuestion&, TestingChamberQuestion);

