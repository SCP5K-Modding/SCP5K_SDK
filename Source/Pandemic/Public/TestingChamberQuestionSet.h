#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "TestingChamberQuestion.h"
#include "TestingChamberQuestionSet.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UTestingChamberQuestionSet : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTestingChamberQuestion> Questions;
    
    UTestingChamberQuestionSet();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTestingChamberQuestion> GetQuestions() const;
    
};

