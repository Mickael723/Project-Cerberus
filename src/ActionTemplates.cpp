#include "../header/ActionTemplates.h"

void AttackAction::performAction(Humanoid& target) {
        damageTarget(target);
}

void AttackAction::damageTarget(Humanoid& target) {
    if (target.getPersonalEffects().checkBlocking()) {
        target.setHealthPoints(target.getHealthPoints() - (attackPotency * 0.50));
        target.configurePersonalEffects().setBlock(false);
    }
    else {
        target.setHealthPoints(target.getHealthPoints() - attackPotency);
    }
    target.updateIsAlive();
}

void AttackBuffAction::performAction(Humanoid& target) {
    target.configurePersonalEffects().setAttackBuff(true);
}

void DefenseBuffAction::performAction(Humanoid& target) {
    target.configurePersonalEffects().setDefenseBuff(true);
}

void AttackDebuffAction::performAction(Humanoid& target) {
    target.configurePersonalEffects().setAttackDebuff(true);
}

void DefenseDebuffAction::performAction(Humanoid& target) {
    target.configurePersonalEffects().setDefenseDebuff(true);
}
