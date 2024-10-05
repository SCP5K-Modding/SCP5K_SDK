#include "MissionItem.h"

UMissionItem::UMissionItem() {
    this->Type = EMissionItemType::MI_Other;
    this->Usage = EMissionItemUsageType::MIU_Individual;
    this->Quality = 0;
    this->MaxItems = 0;
    this->bCanView = true;
    this->bIsVisible = true;
}


