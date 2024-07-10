#include "../header/ActionTemplates.h"
#include <gtest/gtest.h>

//Test Subjects
AttackAction punch("Punch", 1, "Punches dudes", 20);
Humanoid bob("Bob", 2, 100, 100);

TEST(AttackActions, RegularHumanoid) {
    punch.performAction(bob);
    EXPECT_EQ(bob.getHealthPoints(), 80);
    EXPECT_EQ(bob.getIsAlive(), true);
}

TEST(AttackActions, NearDeathHumanoid) {
    bob.setHealthPoints(20);
    punch.performAction(bob);
    EXPECT_EQ(bob.getHealthPoints(), 0);
    EXPECT_EQ(bob.getIsAlive(), false);
}

TEST(AttackActions, OverkillHumanoid) {
    bob.setHealthPoints(5);
    punch.performAction(bob);
    EXPECT_EQ(bob.getHealthPoints(), -15);
    EXPECT_EQ(bob.getIsAlive(), false);
}