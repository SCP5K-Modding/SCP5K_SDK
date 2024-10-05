#include "GoreMesh.h"

FGoreMesh::FGoreMesh() {
    this->bHideAssociatedBone = false;
    this->bDisableLowerBones = false;
    this->bPickRandomGib = false;
    this->Radius = 0.00f;
    this->MinDamage = 0.00f;
    this->Event = NULL;
    this->bActive = false;
    this->bEnabled = false;
    this->MeshComponent = NULL;
    this->GibComponent = NULL;
}

