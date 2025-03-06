#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "AIHeard.h"
#include "AIInteractionAnimations.h"
#include "AISquad.h"
#include "ESAIBehaviors_Calm.h"
#include "ESAIBehaviors_Combat.h"
#include "ESAISquad_Types.h"
#include "SeenTarget.h"
#include "SAIComponent.generated.h"

class AActor;
class APawn;
class ASAIPatrolPath;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentlyInteracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIInteractionAnimations InteractionAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InteractTransform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMorale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoraleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCoverCrouchDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireDelayMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllPerceivedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllKnownTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DesiredTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeenTarget> AllKnownTargets_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeenTarget BestTarget_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEverDropAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTillCalm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeardNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIHeard> AllHeardActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIHeard> AllRelevantHeardActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasLowerCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasUpperCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasRightCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasLeftCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESAIBehaviors_Calm::Type> CurrentCalmBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESAIBehaviors_Combat::Type> CurrentCombatBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESAISquad_Types::Type> CurrentSquadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ESAIBehaviors_Calm::Type>> AvailableCalmBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BehaviorSwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEverBeenInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatTension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNearbyCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLastKnownLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastDamageLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* LeaderPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISquad SquadRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentPatrolkey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASAIPatrolPath* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolPointWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoamWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoamFromSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AIVoiceData;
    
public:
    USAIComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSquadType(TEnumAsByte<ESAISquad_Types::Type> NewSquadType);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadRef(FAISquad NewSquadRef);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillLevel(int32 NewSkillLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetRoamRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetRoamFromSpawn(bool bShouldUseStart);
    
    UFUNCTION(BlueprintCallable)
    void SetPatrolPath(ASAIPatrolPath* NewPatrolPath);
    
    UFUNCTION(BlueprintCallable)
    void SetPatrolDelay(float NewPatrolDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetMoraleMultipler(float NewMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetFireDelayMult(float NewFireDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMorale(float NewMorale);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCalmBehavior(TEnumAsByte<ESAIBehaviors_Calm::Type> NewCalmBehavior);
    
    UFUNCTION(BlueprintCallable)
    void SetAvailableCalmBehaviors(TArray<TEnumAsByte<ESAIBehaviors_Calm::Type>> NewCalmBehaviors);
    
    UFUNCTION(BlueprintCallable)
    void SetAIVoices(FDataTableRowHandle NewVoices);
    
    UFUNCTION(BlueprintCallable)
    void SetAIBehaviorSwitchTime(float NewSwitchTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RandomizeCalmBehavior();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVoiceLine(FName VoicelineType);
    
    UFUNCTION(BlueprintCallable)
    void NerfMorale(float NerfAmount, bool bPlayVoiceLine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpperCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLowerCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeardNoise() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAISquad GetSquadRef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetSquadMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoamWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoamRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSquadMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxCoverCrouchDist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastDamageLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFireDelayMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDesiredTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESAISquad_Types::Type> GetCurrentSquadType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentPatrolKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMorale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESAIBehaviors_Combat::Type> GetCurrentCombatBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESAIBehaviors_Calm::Type> GetCurrentCalmBehavior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoverTraceDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllKnownTargets() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventStartInteraction(bool bShouldPlayVoiceline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMovingToCover(bool bShouldPlayVoiceline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventFriendlyDied(bool bShouldPlayVoiceline, bool bIsLastSquadMember);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventEnemyDied(bool bShouldPlayVoiceline);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRoamFromSpawn() const;
    
    UFUNCTION(BlueprintCallable)
    void BuffMorale(float BuffAmount, bool bPlayVoiceLine);
    
};

