#include "SCP173Controller.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIUtils -ObjectName=AITaskManagerComponent -FallbackName=AITaskManagerComponent
#include "SCP173NavigationQueryFilter.h"
#include "SCP173PathFollowingComponent.h"

ASCP173Controller::ASCP173Controller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USCP173PathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->DefaultNavigationFilterClass = USCP173NavigationQueryFilter::StaticClass();
    this->TaskManagerComponent = CreateDefaultSubobject<UAITaskManagerComponent>(TEXT("TaskManagerComponent"));
}

ASCP173Base* ASCP173Controller::GetSCP173() const {
    return NULL;
}


