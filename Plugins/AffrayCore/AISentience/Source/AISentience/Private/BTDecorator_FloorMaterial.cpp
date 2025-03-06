#include "BTDecorator_FloorMaterial.h"

UBTDecorator_FloorMaterial::UBTDecorator_FloorMaterial() {
    this->GroundTraceLength = 300.00f;
    this->GroundTraceOffset = 50.00f;
    this->ObservedBlackboardValueTolerance = 100.00f;
    this->CheckType = EFloorMaterialCheckType::Any;
}


