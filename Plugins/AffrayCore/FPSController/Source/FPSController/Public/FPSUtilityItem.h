#pragma once
#include "CoreMinimal.h"
#include "FPSItem.h"
#include "FPSUtilityItem.generated.h"

class UFPSUtilityItemData;

UCLASS(Blueprintable)
class FPSCONTROLLER_API AFPSUtilityItem : public AFPSItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFPSUtilityItemData* UtilityItemData;
    
    AFPSUtilityItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Use();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUse();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastUse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticUse();
    
};

