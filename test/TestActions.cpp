#include "../header/ActionTemplates.h"
#include <gtest/gtest.h>


// Testing AttackAction class
TEST(AttackActionTest, DefaultConstructor) {
    AttackAction action;
    EXPECT_EQ(action.getAttackPotency(), -1);
}

TEST(AttackActionTest, ParameterizedConstructor) {
    AttackAction action("Slash", 1, "A powerful slash", 10, 50);
    EXPECT_EQ(action.getAttackPotency(), 50);
}

TEST(AttackActionTest, SetAttackPotency) {
    AttackAction action;
    action.setAttackPotency(75);
    EXPECT_EQ(action.getAttackPotency(), 75);
}

// Testing AttackBuffAction class
TEST(AttackBuffActionTest, DefaultConstructor) {
    AttackBuffAction action;
    EXPECT_EQ(action.getBuffPotency(), -1);
}

TEST(AttackBuffActionTest, ParameterizedConstructor) {
    AttackBuffAction action("Rage", 2, "Increase attack power", 5, 0.25);
    EXPECT_EQ(action.getBuffPotency(), 0.25);
}

TEST(AttackBuffActionTest, SetBuffPotency) {
    AttackBuffAction action;
    action.setBuffPotency(0.35);
    EXPECT_EQ(action.getBuffPotency(), 0.35);
}

// Testing DefenseBuffAction class
TEST(DefenseBuffActionTest, DefaultConstructor) {
    DefenseBuffAction action;
    EXPECT_EQ(action.getBuffPotency(), -1);
}

TEST(DefenseBuffActionTest, ParameterizedConstructor) {
    DefenseBuffAction action("Shield", 3, "Increase defense power", 5, 0.40);
    EXPECT_EQ(action.getBuffPotency(), 0.40);
}

TEST(DefenseBuffActionTest, SetBuffPotency) {
    DefenseBuffAction action;
    action.setBuffPotency(0.45);
    EXPECT_EQ(action.getBuffPotency(), 0.45);
}

// Testing AttackDebuffAction class
TEST(AttackDebuffActionTest, DefaultConstructor) {
    AttackDebuffAction action;
    EXPECT_EQ(action.getDebuffPotency(), -1);
}

TEST(AttackDebuffActionTest, ParameterizedConstructor) {
    AttackDebuffAction action("Weaken", 4, "Decrease attack power", 5, 0.20);
    EXPECT_EQ(action.getDebuffPotency(), 0.20);
}

TEST(AttackDebuffActionTest, SetDebuffPotency) {
    AttackDebuffAction action;
    action.setDebuffPotency(0.25);
    EXPECT_EQ(action.getDebuffPotency(), 0.25);
}

// Testing DefenseDebuffAction class
TEST(DefenseDebuffActionTest, DefaultConstructor) {
    DefenseDebuffAction action;
    EXPECT_EQ(action.getDebuffPotency(), -1);
}

TEST(DefenseDebuffActionTest, ParameterizedConstructor) {
    DefenseDebuffAction action("Shatter", 5, "Decrease defense power", 5, 0.15);
    EXPECT_EQ(action.getDebuffPotency(), 0.15);
}

TEST(DefenseDebuffActionTest, SetDebuffPotency) {
    DefenseDebuffAction action;
    action.setDebuffPotency(0.20);
    EXPECT_EQ(action.getDebuffPotency(), 0.20);
}

// Testing HealAction class
TEST(HealActionTest, DefaultConstructor) {
    HealAction action;
    EXPECT_EQ(action.getHealPotency(), -1);
}

TEST(HealActionTest, ParameterizedConstructor) {
    HealAction action("Heal", 6, "Restore health", 10, 30);
    EXPECT_EQ(action.getHealPotency(), 30);
}

TEST(HealActionTest, SetHealPotency) {
    HealAction action;
    action.setHealPotency(40);
    EXPECT_EQ(action.getHealPotency(), 40);
}
