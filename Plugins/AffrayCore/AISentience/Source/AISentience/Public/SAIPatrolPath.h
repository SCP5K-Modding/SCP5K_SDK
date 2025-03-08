#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPatrolType.h"
#include "SAIPatrolPath.generated.h"

class ASAIPatrolPoint;
class USceneComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIPatrolPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASAIPatrolPoint*> PatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PatrolKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPatrolType::Type> PatrolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    ASAIPatrolPath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPatrolType::Type> GetPatrolType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPatrolKey() const;
    
};

