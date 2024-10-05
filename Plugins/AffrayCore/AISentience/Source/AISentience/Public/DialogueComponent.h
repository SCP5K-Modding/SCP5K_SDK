#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FMODAudioComponent.h"
#include "CurrentDialogue.h"
#include "Dialogue.h"
#include "DialogueComponent.generated.h"

class UDataTable;
class UDialogueComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API UDialogueComponent : public UFMODAudioComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueMCDelegate, UDialogueComponent*, Component, FName, DialogueID);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueMCDelegate DialogueStartedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueMCDelegate DialogueFinishedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueMCDelegate DialogueInterruptedMCDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DialoguePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OwnerDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAudibleDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPreferredDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentDialogue, meta=(AllowPrivateAccess=true))
    FCurrentDialogue CurrentDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NextOverlayedDialogueID, meta=(AllowPrivateAccess=true))
    FName NextOverlayedDialogueID;
    
public:
    UDialogueComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldBeInterrupted(UDialogueComponent* InterruptingComponent, float InterruptDistance) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDialogueTable(const UDataTable* NewDialogueTable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void QueueResponse(UDialogueComponent* Target, FName ResponseID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResponseAcknowledged(bool bCanRespond);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_NextOverlayedDialogueID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentDialogue();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterruptAttempt(UDialogueComponent* InterruptingComponent, float InterruptDistance, bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishSpeaking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDialogueBroadcasted(UDialogueComponent* BroadcastingComponent, FName DialogueID, float AudibleDistance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwaitingFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttemptingToRespond() const;
    
    UFUNCTION(BlueprintCallable)
    void Interrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSpeakerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<FName> GetPossibleResponses(FName DialogueID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentResponseID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentDialogueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogue GetCurrentDialogue() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeResponse(FName NewResponseID);
    
    UFUNCTION(BlueprintCallable)
    void CancelResponse();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastInterrupt(FName DialogueID, float InterruptRange);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastDialogue(FName DialogueID);
    
};

