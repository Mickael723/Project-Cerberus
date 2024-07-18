#include "../header/Combatant.h"
#include <gtest/gtest.h>

TEST(CombatantTest, ConstructorTest) {
    Combatant h("Hero", 1, 100, 150);
    EXPECT_EQ(h.getHealthPoints(), 100);
    EXPECT_EQ(h.getMaxHealthPoints(), 150);
    EXPECT_EQ(h.getInBattle(), false);
    EXPECT_EQ(h.getIsAlive(), false);
}

TEST(CombatantTest, CheckIsAliveTest) {
    Combatant h("Hero", 1, 100, 150);
    EXPECT_TRUE(h.checkIsAlive());
    h.setHealthPoints(0);
    EXPECT_FALSE(h.checkIsAlive());
}

TEST(CombatantTest, UpdateIsAliveTest) {
    Combatant h("Hero", 1, 100, 150);
    h.updateIsAlive();
    EXPECT_TRUE(h.getIsAlive());
    h.setHealthPoints(0);
    h.updateIsAlive();
    EXPECT_FALSE(h.getIsAlive());
}

TEST(CombatantTest, SettersAndGettersTest) {
    Combatant h;
    h.setHealthPoints(80);
    h.setMaxHealthPoints(120);
    h.setInBattle(true);
    h.setIsAlive(true);

    EXPECT_EQ(h.getHealthPoints(), 80);
    EXPECT_EQ(h.getMaxHealthPoints(), 120);
    EXPECT_EQ(h.getInBattle(), true);
    EXPECT_EQ(h.getIsAlive(), true);
}