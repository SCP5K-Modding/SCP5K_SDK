#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "PlayerTriggerVolume.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class GAMEUTILITIES_API APlayerTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnlyOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerChance;
    
    APlayerTriggerVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerLeft(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerEntered(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTrigger(AActor* OtherActor) const;
    
};

