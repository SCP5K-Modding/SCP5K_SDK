#include "AISpawn.h"

FAISpawn::FAISpawn() {
    this->AIClass = NULL;
    this->bShouldBeLeader = false;
    this->bShouldEverBeLeader = false;
    this->DesiredReactionTime = 0.00f;
    this->DesiredMinReactionTime = 0.00f;
    this->DesiredFireDelayMult = 0.00f;
    this->DesiredSkillLevel = 0;
    this->bShouldEverDropAlert = false;
    this->TimeTillCalm = 0.00f;
    this->DesiredPatrolPath = NULL;
    this->DesiredPatrolWaitTime = 0.00f;
    this->DesiredRoamRadius = 0.00f;
    this->DesiredRoamWaitTime = 0.00f;
    this->bRoamingBasedOnSpawn = false;
    this->DesiredCalmBehavior = ESAIBehaviors_Calm::BE_Idle;
    this->DesiredSquadType = ESAISquad_Types::SQ_Default;
    this->DesiredBehaviorSwitchTime = 0.00f;
    this->DesiredCombatBehavior = ESAIBehaviors_Combat::BE_Default;
    this->DesiredMorale = 0.00f;
    this->DesiredMoraleMultiplier = 0.00f;
}

