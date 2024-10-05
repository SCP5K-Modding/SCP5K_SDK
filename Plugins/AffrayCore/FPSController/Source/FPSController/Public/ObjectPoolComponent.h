#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PooledObject.h"
#include "Templates/SubclassOf.h"
#include "ObjectPoolComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FPSCONTROLLER_API UObjectPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPooledObject> UsedPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPooledObject> AvailablePool;
    
public:
    UObjectPoolComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool ReturnObject(AActor* Object);
    
    UFUNCTION(BlueprintCallable)
    bool CreateObject(AActor*& Object, FTransform Transform);
    
};

