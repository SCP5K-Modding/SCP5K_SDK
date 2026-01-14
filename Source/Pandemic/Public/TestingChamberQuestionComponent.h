#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TestingChamberQuestion.h"
#include "TestingChamberQuestionAnsweredMCDelegateDelegate.h"
#include "TestingChamberQuestionSelectedMCDelegateDelegate.h"
#include "TestingChamberQuestionComponent.generated.h"

class APlayerController;
class ATestingChamberManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTestingChamberQuestionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestingChamberQuestionSelectedMCDelegate QuestionSelectedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestingChamberQuestionAnsweredMCDelegate QuestionAnsweredMCDelegate;
    
    UTestingChamberQuestionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTestingQuestions();
    
    UFUNCTION(BlueprintCallable)
    void StartTestingQuestions(const FString& ChamberName, bool bTestWithWeights);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnQuestionSelected(const FTestingChamberQuestion& TestingChamberQuestion);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void OnQuestionAnswered(const APlayerController* Player, const FTestingChamberQuestion& TestingChamberQuestion, const FText& Answer);
    
private:
    UFUNCTION(BlueprintCallable)
    void NextDebugQuestion(const APlayerController* Player, const FTestingChamberQuestion& TestingChamberQuestion, const FText& Answer);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadTestingChamberIds();
    
    UFUNCTION(BlueprintCallable)
    void LoadQuestion(const ATestingChamberManager* Scenario);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTestingChamberIds(TArray<FString>& OutChamberIds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSeenQuestions(TArray<FString>& OutSeenQuestions, bool bFromDebugMode) const;
    
    UFUNCTION(BlueprintCallable)
    void AnswerQuestion(const APlayerController* Player, const FTestingChamberQuestion& Question, const FText& Answer);
    
};

