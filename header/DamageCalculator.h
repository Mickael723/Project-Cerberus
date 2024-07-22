#pragma once

#include "Combatant.h"
#include <cmath>

class DamageCalculator {
    public:
     static int performCalculation(const Combatant& attacker, const Combatant& defender, const int baseDamage);
};