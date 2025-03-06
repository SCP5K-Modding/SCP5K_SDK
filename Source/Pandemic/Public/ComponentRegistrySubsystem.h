#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ComponentAddedMCDelegateDelegate.h"
#include "ComponentRemovedMCDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ComponentRegistrySubsystem.generated.h"

class AActor;
class UActorComponent;

UCLASS(Blueprintable)
class UComponentRegistrySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentAddedMCDelegate ComponentAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentRemovedMCDelegate ComponentRemoved;
    
    UComponentRegistrySubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveComponent(UActorComponent* ComponentToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetComponents(TSubclassOf<UActorComponent> ComponentsClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetComponentActors(TSubclassOf<UActorComponent> ComponentsClass) const;
    
    UFUNCTION(BlueprintCallable)
    void AddComponent(UActorComponent* NewComponent);
    
};

