#include "../header/DamageCalculator.h"
#include <iostream>
#include <gtest/gtest.h>

class DamageCalculatorTest : public ::testing::Test {
    protected:
        Combatant hero = Combatant("Hero", 21, 100, 100);
        Combatant villain = Combatant("Villain", 22, 100, 100);
};

TEST_F(DamageCalculatorTest, BasicConditions) {
    hero.configureBattleStats().setLevel(1);
    hero.configureBattleStats().setStrength(10);
    hero.configureBattleStats().setArmor(10);
    villain.configureBattleStats().setLevel(1);
    villain.configureBattleStats().setStrength(10);
    villain.configureBattleStats().setArmor(10);

    EXPECT_DOUBLE_EQ(DamageCalculator::performCalculation(hero, villain, 10), 9.0);
}

TEST_F(DamageCalculatorTest, AttackerOverLevel) {
    hero.configureBattleStats().setLevel(5);
    hero.configureBattleStats().setStrength(20);
    hero.configureBattleStats().setArmor(10);
    villain.configureBattleStats().setLevel(1);
    villain.configureBattleStats().setStrength(10);
    villain.configureBattleStats().setArmor(10);

    EXPECT_DOUBLE_EQ(DamageCalculator::performCalculation(hero, villain, 10), 23.0);
}

TEST_F(DamageCalculatorTest, DefenderOverLevel) {
    hero.configureBattleStats().setLevel(1);
    hero.configureBattleStats().setStrength(10);
    hero.configureBattleStats().setArmor(10);
    villain.configureBattleStats().setLevel(5);
    villain.configureBattleStats().setStrength(10);
    villain.configureBattleStats().setArmor(20);

    EXPECT_DOUBLE_EQ(DamageCalculator::performCalculation(hero, villain, 10), 7.0);
}

TEST_F(DamageCalculatorTest, DefenderisBlocking) {
    hero.configureBattleStats().setLevel(1);
    hero.configureBattleStats().setStrength(10);
    hero.configureBattleStats().setArmor(10);
    villain.configureBattleStats().setLevel(1);
    villain.configureBattleStats().setStrength(10);
    villain.configureBattleStats().setArmor(10);
    villain.configurePersonalEffects().setBlock(true);

    EXPECT_DOUBLE_EQ(DamageCalculator::performCalculation(hero, villain, 10), 5.0);
}

TEST_F(DamageCalculatorTest, AttackerBuffed) {
    hero.configureBattleStats().setLevel(1);
    hero.configureBattleStats().setStrength(10);
    hero.configureBattleStats().setArmor(10);
    villain.configureBattleStats().setLevel(1);
    villain.configureBattleStats().setStrength(10);
    villain.configureBattleStats().setArmor(10);
    hero.configurePersonalEffects().setAttackBuff(true);
    hero.configureBattleStats().setModifiedStrengthMultiplier(1.25);

    EXPECT_DOUBLE_EQ(DamageCalculator::performCalculation(hero, villain, 10), 10);
}

TEST_F(DamageCalculatorTest, DefenderBuffed) {
    hero.configureBattleStats().setLevel(1);
    hero.configureBattleStats().setStrength(10);
    hero.configureBattleStats().setArmor(10);
    villain.configureBattleStats().setLevel(1);
    villain.configureBattleStats().setStrength(10);
    villain.configureBattleStats().setArmor(10);
    villain.configurePersonalEffects().setDefenseBuff(true);
    villain.configureBattleStats().setModifiedArmorMultiplier(1.25);

    EXPECT_DOUBLE_EQ(DamageCalculator::performCalculation(hero, villain, 10), 8);
}
