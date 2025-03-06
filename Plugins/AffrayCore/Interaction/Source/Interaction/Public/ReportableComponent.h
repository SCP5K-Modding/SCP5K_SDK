#pragma once
#include "CoreMinimal.h"
#include "InteractableComponent.h"
#include "OnReportDelegateDelegate.h"
#include "ReportableComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTION_API UReportableComponent : public UInteractableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReportDelegate OnReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasBeenInvestigated, meta=(AllowPrivateAccess=true))
    bool bHasBeenInvestigated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasBeenReported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterAsReportable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowWithoutInvestigation;
    
    UReportableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReport(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasBeenInvestigated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReport(AActor* Instigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Investigated();
    
};

