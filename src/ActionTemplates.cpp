#include "../header/ActionTemplates.h"
#include "../header/DamageCalculator.h"

void AttackAction::performAction(Combatant& target) {
        damageTarget(target);
}

void AttackAction::damageTarget(Combatant& target) {
    if (target.getPersonalEffects().checkBlocking()) {
        target.setHealthPoints(target.getHealthPoints() - (attackPotency * 0.50));
        target.configurePersonalEffects().setBlock(false);
    }
    else {
        target.setHealthPoints(target.getHealthPoints() - attackPotency);
    }
    target.updateIsAlive();
}

void AttackBuffAction::performAction(Combatant& target) {
    target.configurePersonalEffects().setAttackBuff(true);
}

void DefenseBuffAction::performAction(Combatant& target) {
    target.configurePersonalEffects().setDefenseBuff(true);
}

void AttackDebuffAction::performAction(Combatant& target) {
    target.configurePersonalEffects().setAttackDebuff(true);
}

void DefenseDebuffAction::performAction(Combatant& target) {
    target.configurePersonalEffects().setDefenseDebuff(true);
}
