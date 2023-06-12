#include "PersonalityEmoteOverrideRule.h"

FPersonalityEmoteOverrideRule::FPersonalityEmoteOverrideRule() {
    this->RuleType = EFactionRuleType::EnemyTeam;
    this->Operator = EFactionRuleOperator::EqualTo;
    this->Faction = EFaction::Agatha;
}

