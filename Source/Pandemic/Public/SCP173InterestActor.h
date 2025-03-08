#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCP173InterestActor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASCP173InterestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeInQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterestWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* InterestActorMesh;
    
public:
    ASCP173InterestActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInterestWeight(float NewInterestWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetIncludeInQueries(bool NewIncludeInQueries);
    
};

