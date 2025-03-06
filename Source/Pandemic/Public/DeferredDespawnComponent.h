#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DeferredDespawnMCDelegateDelegate.h"
#include "DeferredDespawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UDeferredDespawnComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeferredDespawnMCDelegate OnDespawn;
    
    UDeferredDespawnComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DeferredDespawn(float Delay);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_Despawn();
    
};

