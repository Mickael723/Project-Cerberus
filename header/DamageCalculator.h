#pragma once
#include "Humanoid.h"



class DamageCalculator {
    public:
     static int performCalculation(const Humanoid& attacker, const Humanoid& defender, const int baseDamage);
};