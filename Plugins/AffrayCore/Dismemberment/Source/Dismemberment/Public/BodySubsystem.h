#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Body.h"
#include "BodySubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class DISMEMBERMENT_API UBodySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInitialize;
    
public:
    UBodySubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetMaxSize(int32 NewMaxSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* FindClosestDynamicBody(FVector Location, float MaxDistance, float Threshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBody FindClosestBody(FVector Location, float MaxDistance, float Threshold) const;
    
    UFUNCTION(BlueprintCallable)
    void AddStaticBody(AActor* Body);
    
    UFUNCTION(BlueprintCallable)
    void AddBody(AActor* Body);
    
};

