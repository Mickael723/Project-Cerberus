#pragma once

#include "Combatant.h"
#include <cmath>

class DamageCalculator {
    public:
     static double performCalculation(const Combatant& attacker, const Combatant& defender, const double baseDamage);
};