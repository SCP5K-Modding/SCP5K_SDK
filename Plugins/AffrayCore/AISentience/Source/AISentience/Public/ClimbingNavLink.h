#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "EClimbingType.h"
#include "ClimbingNavLink.generated.h"

class AActor;

UCLASS(Blueprintable)
class AISENTIENCE_API AClimbingNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbingType Type;
    
    AClimbingNavLink(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SmartLinkReached(AActor* PathOwner, const FVector& DestinationPoint);
    
};

