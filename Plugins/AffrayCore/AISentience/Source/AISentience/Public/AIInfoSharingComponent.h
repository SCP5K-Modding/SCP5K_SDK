#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SAISquadInfo.h"
#include "ShareInfoMCDelegateDelegate.h"
#include "AIInfoSharingComponent.generated.h"

class UAIInfoSharingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API UAIInfoSharingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShareInfoMCDelegate ShareAllInfoMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShareInfoMCDelegate ShareInfoMCDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAISquadInfo SquadInfo;
    
    UAIInfoSharingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ShareSquadInfo(UAIInfoSharingComponent* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShareInfo(UAIInfoSharingComponent* Target, bool bFullShare);
    
private:
    UFUNCTION(BlueprintCallable)
    void ShareAllSquadInfo(UAIInfoSharingComponent* Target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveSquadInfo(UAIInfoSharingComponent* OtherInfoSharingComponent, FSAISquadInfo OtherSquadInfo, bool bFullShare);
    
};

