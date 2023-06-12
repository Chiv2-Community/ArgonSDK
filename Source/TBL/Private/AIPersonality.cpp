#include "AIPersonality.h"

FAIPersonality::FAIPersonality() {
    this->Weight = 0.00f;
    this->Faction = EFaction::Agatha;
    this->bUseDevNamesTextFile = false;
    this->bAllowNameReuse = false;
    this->bOverrideCombatBehaviorSets = false;
    this->bOverrideClassAndCustomization = false;
    this->LoadoutOverride = NULL;
    this->bOverrideVariancePattern = false;
    this->ReactionTimeEvents = 0.00f;
    this->FrameDelayEnemyLocationMovement = 0;
    this->FrameDelayEnemyLocationAttacks = 0;
    this->TurnLimit = 0.00f;
    this->BlockReactionTurnLimit = 0.00f;
    this->DragTurnLimit = 0.00f;
    this->AccuracySprintAttack = 0.00f;
    this->AccuracyHandleIncomingAttack = 0.00f;
    this->AccuracyHandleParrySuccess = 0.00f;
    this->AccuracyHandleBlockBreak = 0.00f;
    this->AccuracyCombos = 0.00f;
    this->AccuracyAdvantageJudgement = 0.00f;
}

