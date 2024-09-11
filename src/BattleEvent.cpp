#include "../header/BattleEvent.h"

void BattleEvent::determineAction(Combatant& user, Combatant& target, Action* action) {
    if (action->getActionCategory() == ATTACK) {
        AttackAction* foundAction = dynamic_cast<AttackAction*>(action);
        useCombatantAttackAction(user, target, foundAction->getAttackPotency());
    }
    else if (action->getActionCategory() == DEFEND) {
        user.configurePersonalEffects().setBlock(true);
    }
    else if (action->getActionCategory() == ATK_BUFF) {
        AttackBuffAction* foundAction = dynamic_cast<AttackBuffAction*>(action);
        useCombatantAttackBuffAction(user, foundAction->getBuffPotency());
    }
    else if (action->getActionCategory() == DEF_BUFF) {
        DefenseBuffAction* foundAction = dynamic_cast<DefenseBuffAction*>(action);
        useCombatantDefenseBuffAction(user, foundAction->getBuffPotency());
    }
    else if (action->getActionCategory() == ATK_DEBUFF) {
        AttackDebuffAction* foundAction = dynamic_cast<AttackDebuffAction*>(action);
        useCombatantAttackDebuffAction(target, foundAction->getDebuffPotency());
    }
    else if (action->getActionCategory() == DEF_DEBUFF) {
        DefenseDebuffAction* foundAction = dynamic_cast<DefenseDebuffAction*>(action);
        useCombatantDefenseDebuffAction(target, foundAction->getDebuffPotency());
    }
    else if (action->getActionCategory() == HEAL) {
        HealAction* foundAction = dynamic_cast<HealAction*>(action);
        useCombatantHealAction(target, foundAction->getHealPotency());
    }
}
void BattleEvent::useCombatantAttackAction(Combatant& user, Combatant& target, const int attackPotency) {
    target.setHealthPoints(target.getHealthPoints() - DamageCalculator::performCalculation(user, target, attackPotency));
    target.updateIsAlive();
}

void BattleEvent::useCombatantAttackBuffAction(Combatant& reciever, const double buffPotency) {
    reciever.configurePersonalEffects().setAttackBuff(true);
    reciever.configureBattleStats().setModifiedStrengthMultiplier(buffPotency);
}

void BattleEvent::useCombatantDefenseBuffAction(Combatant& reciever, const double buffPotency) {
    reciever.configurePersonalEffects().setDefenseBuff(true);
    reciever.configureBattleStats().setModifiedArmorMultiplier(buffPotency);
}

void BattleEvent::useCombatantAttackDebuffAction(Combatant& target, const double debuffPotency) {
    target.configurePersonalEffects().setAttackDebuff(true);
    target.configureBattleStats().setModifiedStrengthMultiplier(debuffPotency);
}

void BattleEvent::useCombatantDefenseDebuffAction(Combatant& target, const double debuffPotency) {
    target.configurePersonalEffects().setDefenseDebuff(true);
    target.configureBattleStats().setModifiedArmorMultiplier(debuffPotency);
}

void BattleEvent::useCombatantHealAction(Combatant& reciever, const int healPotency) {
    reciever.setHealthPoints(reciever.getHealthPoints() + healPotency);
    if (reciever.getHealthPoints() > reciever.getMaxHealthPoints()) {reciever.setHealthPoints(reciever.getMaxHealthPoints());}
}