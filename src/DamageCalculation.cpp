#include "../header/DamageCalculator.h"

int DamageCalculator::performCalculation(const Humanoid& attacker, const Humanoid& defender, const int baseDamage) {
    double attackerDamage = attacker.getPersonalStats().getAttackStrength();
    double defenderDefense = defender.getPersonalStats().getIncomingDefense();

    if (attacker.getPersonalEffects().checkAttackBuff()) {
        attackerDamage *= 1.25;
    }

    if (defender.getPersonalEffects().checkDefenseDebuff()) {
        defenderDefense *= 0.75;
    }

    if (defender.getPersonalEffects().checkDefenseBuff()) {
        defenderDefense *= 1.25;
    }

    return baseDamage + (baseDamage * attackerDamage) - (baseDamage * defenderDefense);
}