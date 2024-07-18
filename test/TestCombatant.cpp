#include "../header/Combatant.h"
#include <iostream>

#include <gtest/gtest.h>

// Test the default constructor
TEST(CombatantTest, DefaultConstructor) {
    Combatant combatant;
    EXPECT_EQ(combatant.getHealthPoints(), 0);
    EXPECT_EQ(combatant.getMaxHealthPoints(), 0);
    EXPECT_EQ(combatant.getStaminaPoints(), 0);
    EXPECT_EQ(combatant.getMaxStaminaPoints(), 0);
    EXPECT_FALSE(combatant.getInBattle());
    EXPECT_FALSE(combatant.getIsAlive());
}

// Test the parameterized constructor
TEST(CombatantTest, ParameterizedConstructor) {
    Combatant combatant("Warrior", 1, 100, 50);
    EXPECT_EQ(combatant.getHealthPoints(), 100);
    EXPECT_EQ(combatant.getMaxHealthPoints(), 100);
    EXPECT_EQ(combatant.getStaminaPoints(), 50);
    EXPECT_EQ(combatant.getMaxStaminaPoints(), 50);
    EXPECT_FALSE(combatant.getInBattle());
    EXPECT_FALSE(combatant.getIsAlive());
}

// Test setters and getters for health points
TEST(CombatantTest, HealthPoints) {
    Combatant combatant;
    combatant.setHealthPoints(80);
    EXPECT_EQ(combatant.getHealthPoints(), 80);

    combatant.setMaxHealthPoints(120);
    EXPECT_EQ(combatant.getMaxHealthPoints(), 120);
}

// Test setters and getters for stamina points
TEST(CombatantTest, StaminaPoints) {
    Combatant combatant;
    combatant.setStaminaPoints(40);
    EXPECT_EQ(combatant.getStaminaPoints(), 40);

    combatant.setMaxStaminaPoints(90);
    EXPECT_EQ(combatant.getMaxStaminaPoints(), 90);
}

// Test setters and getters for inBattle flag
TEST(CombatantTest, InBattle) {
    Combatant combatant;
    combatant.setInBattle(true);
    EXPECT_TRUE(combatant.getInBattle());

    combatant.setInBattle(false);
    EXPECT_FALSE(combatant.getInBattle());
}

// Test setters and getters for isAlive flag
TEST(CombatantTest, IsAlive) {
    Combatant combatant;
    combatant.setIsAlive(true);
    EXPECT_TRUE(combatant.getIsAlive());

    combatant.setIsAlive(false);
    EXPECT_FALSE(combatant.getIsAlive());
}

// Test personal effects configuration
TEST(CombatantTest, ConfigurePersonalEffects) {
    Combatant combatant;
    combatant.configurePersonalEffects().setAttackBuff(true);
    combatant.configurePersonalEffects().setBlock(true);
    EXPECT_TRUE(combatant.getPersonalEffects().checkAttackBuff());
    EXPECT_TRUE(combatant.getPersonalEffects().checkBlocking());
}

// Test personal action list
// TEST(CombatantTest, PersonalActionList) {
//     Combatant combatant;
//     AttackAction action1("Thwack", 15);
//     combatant.getPersonalActionList().push_back(action1);
//     std::cout << combatant.getPersonalActionList().at(0).getName() << std::endl;
//     EXPECT_EQ(combatant.getPersonalActionList().at(0), action1);
// }

// Test checkIsAlive and updateIsAlive methods
TEST(CombatantTest, CheckAndUpdateIsAlive) {
    Combatant combatant;
    combatant.setHealthPoints(50);
    EXPECT_TRUE(combatant.checkIsAlive());

    combatant.setHealthPoints(0);
    EXPECT_FALSE(combatant.checkIsAlive());

    combatant.setHealthPoints(50);
    combatant.updateIsAlive();
    EXPECT_TRUE(combatant.getIsAlive());

    combatant.setHealthPoints(0);
    combatant.updateIsAlive();
    EXPECT_FALSE(combatant.getIsAlive());
}
// TEST(CombatantTest, ConstructorTest) {
//     Combatant h("Hero", 1, 100, 150);
//     EXPECT_EQ(h.getHealthPoints(), 100);
//     EXPECT_EQ(h.getMaxHealthPoints(), 150);
//     EXPECT_EQ(h.getInBattle(), false);
//     EXPECT_EQ(h.getIsAlive(), false);
// }

// TEST(CombatantTest, CheckIsAliveTest) {
//     Combatant h("Hero", 1, 100, 150);
//     EXPECT_TRUE(h.checkIsAlive());
//     h.setHealthPoints(0);
//     EXPECT_FALSE(h.checkIsAlive());
// }

// TEST(CombatantTest, UpdateIsAliveTest) {
//     Combatant h("Hero", 1, 100, 150);
//     h.updateIsAlive();
//     EXPECT_TRUE(h.getIsAlive());
//     h.setHealthPoints(0);
//     h.updateIsAlive();
//     EXPECT_FALSE(h.getIsAlive());
// }

// TEST(CombatantTest, SettersAndGettersTest) {
//     Combatant h;
//     h.setHealthPoints(80);
//     h.setMaxHealthPoints(120);
//     h.setInBattle(true);
//     h.setIsAlive(true);

//     EXPECT_EQ(h.getHealthPoints(), 80);
//     EXPECT_EQ(h.getMaxHealthPoints(), 120);
//     EXPECT_EQ(h.getInBattle(), true);
//     EXPECT_EQ(h.getIsAlive(), true);
// }