#pragma once

#include "Combatant.h"



class DamageCalculator {
    public:
     static int performCalculation(const Combatant& attacker, const Combatant& defender, const int baseDamage);
};