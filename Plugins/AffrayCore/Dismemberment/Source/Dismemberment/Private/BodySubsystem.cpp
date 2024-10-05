#include "BodySubsystem.h"

UBodySubsystem::UBodySubsystem() {
    this->MaxSize = 64;
    this->CurrentIndex = 0;
    this->bAutoInitialize = true;
}

bool UBodySubsystem::SetMaxSize(int32 NewMaxSize) {
    return false;
}

AActor* UBodySubsystem::FindClosestDynamicBody(FVector Location, float MaxDistance, float Threshold) const {
    return NULL;
}

FBody UBodySubsystem::FindClosestBody(FVector Location, float MaxDistance, float Threshold) const {
    return FBody{};
}

void UBodySubsystem::AddStaticBody(AActor* Body) {
}

void UBodySubsystem::AddBody(AActor* Body) {
}


