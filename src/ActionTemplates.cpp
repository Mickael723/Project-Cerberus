#include "../header/ActionTemplates.h"

void AttackAction::performAction(Humanoid& target) {
    if (target.checkIsAlive()) {
        damageTarget(target);
    }
}

void AttackAction::damageTarget(Humanoid &self, Humanoid& target) {
    int damageCalculation = calculateDamage();

    target.setHealthPoints(target.getHealthPoints() - damageCalculation);
    target.updateIsAlive();
}

int AttackAction::calculateDamage(const Humanoid& self, const Humanoid& target) {
    int totalDamage = attackPotency;
    if (self.getPersonalEffects().checkAttackBuff()) {
        totalDamage *= 1.15;
    }
    if (self.getPersonalEffects().checkAttackDebuff()) {
        totalDamage *= 0.85;
    }
    if (target.getPersonalEffects().checkBlocking()) {
        totalDamage *= 0.70;
    }
    if (target.getPersonalEffects().checkDefenseBuff()) {
        totalDamage *= 0.85;
    }
    if (target.getPersonalEffects().checkDefenseDebuff()) {
        totalDamage *= 1.15;
    }
    return totalDamage;
}