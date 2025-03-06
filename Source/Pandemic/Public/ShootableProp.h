#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=SimpleHitData -FallbackName=SimpleHitData
#include "ShootableProp.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AShootableProp : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HitData, meta=(AllowPrivateAccess=true))
    FSimpleHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    AShootableProp(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHitData(const FSimpleHitData& InHitData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFirstHit(FVector position, FVector HitFromDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HitData();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastFirstHit(FVector_NetQuantize position, FVector_NetQuantizeNormal HitFromDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticHit();
    
};

