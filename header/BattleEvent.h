#pragma once

#include "DamageCalculator.h"

class BattleEvent {
    public:
     static void useCombatantAttackAction(Combatant& user, Combatant& target, const int attackActionPotency);
     static void useCombatantAttackBuffAction(Combatant& reciever, const double buffPotency);
     static void useCombatantDefenseBuffAction(Combatant& reciever, const double buffPotency);
     static void useCombatantAttackDebuffAction(Combatant& target, const double debuffPotency);
     static void useCombatantDefenseDebuffAction(Combatant& target, const double debuffPotency);
     static void useCombatantHealAction(Combatant& reciever, const int healPotency);
};