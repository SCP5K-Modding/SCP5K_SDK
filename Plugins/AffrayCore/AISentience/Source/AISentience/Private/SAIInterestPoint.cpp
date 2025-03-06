#include "SAIInterestPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

ASAIInterestPoint::ASAIInterestPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Editor Icon"));
    this->InterestRoot = (UBillboardComponent*)RootComponent;
    this->InterestPriority = 0;
}

int32 ASAIInterestPoint::GetPriority() const {
    return 0;
}


