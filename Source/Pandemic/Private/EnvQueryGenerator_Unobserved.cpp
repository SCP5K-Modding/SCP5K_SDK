#include "EnvQueryGenerator_Unobserved.h"

UEnvQueryGenerator_Unobserved::UEnvQueryGenerator_Unobserved() {
    this->Radius = 1000.00f;
    this->AngleAmount = 3;
    this->PointAmount = 10;
    this->PointAngleOffset = 2;
    this->ViewAngleTolerance = 0.30f;
    this->SphereCheckRadius = 1000.00f;
    this->SphereCheckChannel = TraceTypeQuery1;
    this->DrawDebugType = EDrawDebugTrace::None;
}


