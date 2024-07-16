#include "../header/ActionTemplates.h"
#include <gtest/gtest.h>


//Test Subjects
AttackAction punch("Punch", 1, "Attacks Target", 20, 20);
AttackBuffAction battleCry("Battle Cry", 2, "Increases Target's Attack", 10, 1.25);
DefenseBuffAction guardStance("Guard Stance", 3, "Increases Target's Defense", 10, 1.25);
AttackDebuffAction intimidate("Intimidate", 4, "Lowers Target's Defense", 10, 1.25);
DefenseDebuffAction taunt("Taunt", 5, "Lowers Target's Defense", 10, 1.25);
Humanoid bob("Bob", 10, 100, 100);
Humanoid joe("Joe", 11, 100, 100);

TEST(AttackActions, RegularHumanoid) {
    punch.performAction(bob);
    EXPECT_EQ(bob.getHealthPoints(), 80);
    EXPECT_EQ(bob.getIsAlive(), true);
}

TEST(AttackActions, NearDeathHumanoid) {
    bob.setHealthPoints(20);
    bob.updateIsAlive();
    punch.performAction(bob);
    EXPECT_EQ(bob.getHealthPoints(), 0);
    EXPECT_EQ(bob.getIsAlive(), false);
}

TEST(AttackActions, OverkillHumanoid) {
    bob.setHealthPoints(5);
    bob.updateIsAlive();
    punch.performAction(bob);
    EXPECT_EQ(bob.getHealthPoints(), -15);
    EXPECT_EQ(bob.getIsAlive(), false);
}

TEST(AttackActions, BlockingHumanoid) {
    bob.setHealthPoints(100);
    bob.updateIsAlive();
    bob.configurePersonalEffects().setBlock(true);
    punch.performAction(bob);
    EXPECT_EQ(bob.getHealthPoints(), 90);
    EXPECT_EQ(bob.getIsAlive(), true);
    EXPECT_EQ(bob.getPersonalEffects().checkBlocking(), false);
}

TEST(AttackBuffAcions, ApplyAttackBuff) {
    battleCry.performAction(bob);
    EXPECT_EQ(bob.getPersonalEffects().checkAttackBuff(), true);
}

TEST(DefenseBuffAcions, ApplyDefenseBuff) {
    guardStance.performAction(bob);
    EXPECT_EQ(bob.getPersonalEffects().checkDefenseBuff(), true);
}

TEST(AttackDebuffAcions, ApplyAttackDebuff) {
    intimidate.performAction(bob);
    EXPECT_EQ(bob.getPersonalEffects().checkAttackDebuff(), true);
}

TEST(DefenseDebuffAcions, ApplyDefenseDebuff) {
    taunt.performAction(bob);
    EXPECT_EQ(bob.getPersonalEffects().checkAttackDebuff(), true);
}
