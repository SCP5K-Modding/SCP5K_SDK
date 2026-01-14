#include "TestingChamberQuestionComponent.h"

UTestingChamberQuestionComponent::UTestingChamberQuestionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UTestingChamberQuestionComponent::StopTestingQuestions() {
}

void UTestingChamberQuestionComponent::StartTestingQuestions(const FString& ChamberName, bool bTestWithWeights) {
}

void UTestingChamberQuestionComponent::OnQuestionSelected_Implementation(const FTestingChamberQuestion& TestingChamberQuestion) {
}

void UTestingChamberQuestionComponent::OnQuestionAnswered_Implementation(const APlayerController* Player, const FTestingChamberQuestion& TestingChamberQuestion, const FText& Answer) {
}

void UTestingChamberQuestionComponent::NextDebugQuestion(const APlayerController* Player, const FTestingChamberQuestion& TestingChamberQuestion, const FText& Answer) {
}

void UTestingChamberQuestionComponent::LoadTestingChamberIds() {
}

void UTestingChamberQuestionComponent::LoadQuestion(const ATestingChamberManager* Scenario) {
}

void UTestingChamberQuestionComponent::GetTestingChamberIds(TArray<FString>& OutChamberIds) const {
}

void UTestingChamberQuestionComponent::GetSeenQuestions(TArray<FString>& OutSeenQuestions, bool bFromDebugMode) const {
}

void UTestingChamberQuestionComponent::AnswerQuestion(const APlayerController* Player, const FTestingChamberQuestion& Question, const FText& Answer) {
}


