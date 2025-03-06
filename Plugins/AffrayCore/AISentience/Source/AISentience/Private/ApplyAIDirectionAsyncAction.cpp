#include "ApplyAIDirectionAsyncAction.h"

UApplyAIDirectionAsyncAction::UApplyAIDirectionAsyncAction() {
    this->Direction = NULL;
    this->Instigator = NULL;
}

UApplyAIDirectionAsyncAction* UApplyAIDirectionAsyncAction::ApplyDirectionContainer(FSAIDirectionContainer Container, const TArray<AAIController*>& InTargets, AActor* InInstigator) {
    return NULL;
}

UApplyAIDirectionAsyncAction* UApplyAIDirectionAsyncAction::ApplyDirection(USAIDirection* InDirection, const TArray<AAIController*>& InTargets, AActor* InInstigator) {
    return NULL;
}


