#include "../header/DamageCalculator.h"

int DamageCalculator::performCalculation(const Combatant& attacker, const Combatant& defender, const int basePotency) {

    BattleStats attackerStats = attacker.getPersonalStats();
    CombatantEffects attackerEffects = attacker.getPersonalEffects();
    BattleStats defenderStats = defender.getPersonalStats();
    CombatantEffects defenderEffects = defender.getPersonalEffects();

    double attackerStrength = attackerStats.getStrength();
    double defenderArmor = defenderStats.getArmor();
    int attackerLevel = attackerStats.getLevel();
    int defenderLevel = defenderStats.getLevel();

    if (attackerEffects.checkAttackBuff() || attackerEffects.checkAttackDebuff()) {
        attackerStrength *= attackerStats.getModifiedStrengthMultiplier();
    }

    if (defenderEffects.checkDefenseBuff() || defenderEffects.checkDefenseDebuff()) {
        defenderArmor *= defenderStats.getModifiedArmorMultiplier();
    }
    

    double result = (((((10*attackerLevel)/5) + 10) * basePotency * (attackerStrength/defenderArmor)) / 50) + 5;

    if (defenderEffects.checkBlocking()) {return std::round(result * 0.5);}

    return std::round(result);
}