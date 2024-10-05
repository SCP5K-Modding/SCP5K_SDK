#include "MissionItemSlot.h"
#include "Net/UnrealNetwork.h"

UMissionItemSlot::UMissionItemSlot() {
    this->Item = NULL;
    this->Amount = 0;
}

bool UMissionItemSlot::TryAddAmount(int32 InAmount) {
    return false;
}

void UMissionItemSlot::OnRep_Item() {
}

void UMissionItemSlot::OnRep_Amount() {
}

bool UMissionItemSlot::HasMissionItem(const TArray<UMissionItemSlot*>& Slots, UMissionItem* MissionItem) {
    return false;
}

AActor* UMissionItemSlot::GetOwningActor() const {
    return NULL;
}

UMissionItemSlot* UMissionItemSlot::GetMissionItemSlot(const TArray<UMissionItemSlot*>& Slots, UMissionItem* MissionItem) {
    return NULL;
}

int32 UMissionItemSlot::GetAmount() const {
    return 0;
}

void UMissionItemSlot::Destroy() {
}

UMissionItemSlot* UMissionItemSlot::CreateItemSlot(UObject* Outer, UMissionItem* ItemType, int32 ItemAmount) {
    return NULL;
}

UMissionItemSlot* UMissionItemSlot::CopyItemSlot(UObject* Outer, UMissionItemSlot* Slot) {
    return NULL;
}

void UMissionItemSlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMissionItemSlot, Item);
    DOREPLIFETIME(UMissionItemSlot, Amount);
}


