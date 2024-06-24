#include "../header/Humanoid.h"
#include <gtest/gtest.h>

TEST(HumanoidTest, ConstructorTest) {
    Humanoid h("Hero", 1, 100, 150);
    EXPECT_EQ(h.getHealthPoints(), 100);
    EXPECT_EQ(h.getMaxHealthPoints(), 150);
    EXPECT_EQ(h.getInBattle(), false);
    EXPECT_EQ(h.getIsAlive(), false);
    EXPECT_EQ(h.getPersonalTimer(), nullptr);
}

TEST(HumanoidTest, CheckIsAliveTest) {
    Humanoid h("Hero", 1, 100, 150);
    EXPECT_TRUE(h.checkIsAlive());
    h.setHealthPoints(0);
    EXPECT_FALSE(h.checkIsAlive());
}

TEST(HumanoidTest, UpdateIsAliveTest) {
    Humanoid h("Hero", 1, 100, 150);
    h.updateIsAlive();
    EXPECT_TRUE(h.getIsAlive());
    h.setHealthPoints(0);
    h.updateIsAlive();
    EXPECT_FALSE(h.getIsAlive());
}

TEST(HumanoidTest, ConstructPersonalTimerTest) {
    Humanoid h("Hero", 1, 100, 150);
    h.setInBattle(true);
    h.constructPersonalTimer(2000, 1000, 5);
    ActionTimer* timer = h.getPersonalTimer();
    ASSERT_NE(timer, nullptr);
    EXPECT_EQ(timer->getTimerSpeed(), 2000);
    EXPECT_EQ(timer->getTimerDrain(), 1000);
    EXPECT_EQ(timer->getMaxProgress(), 5);
    h.destroyPersonalTimer(); // Clean up
    delete timer;
}

TEST(HumanoidTest, DestroyPersonalTimerTest) {
    Humanoid h("Hero", 1, 100, 150);
    h.setInBattle(true);
    h.constructPersonalTimer(2000, 1000, 5);
    h.setInBattle(false);
    h.destroyPersonalTimer();
    EXPECT_EQ(h.getPersonalTimer(), nullptr);
}

TEST(HumanoidTest, ConstructDefaultPersonalTimerTest) {
    Humanoid h("Hero", 1, 100, 150);
    h.setInBattle(true);
    h.constructDefaultPersonaltimer();
    ActionTimer* timer = h.getPersonalTimer();
    ASSERT_NE(timer, nullptr);
    EXPECT_EQ(timer->getTimerSpeed(), 1000);
    EXPECT_EQ(timer->getTimerDrain(), 500);
    EXPECT_EQ(timer->getMaxProgress(), 10);
    h.destroyPersonalTimer(); // Clean up
    delete timer;
}

TEST(HumanoidTest, SettersAndGettersTest) {
    Humanoid h;
    h.setHealthPoints(80);
    h.setMaxHealthPoints(120);
    h.setInBattle(true);
    h.setIsAlive(true);

    EXPECT_EQ(h.getHealthPoints(), 80);
    EXPECT_EQ(h.getMaxHealthPoints(), 120);
    EXPECT_EQ(h.getInBattle(), true);
    EXPECT_EQ(h.getIsAlive(), true);

    ActionTimer at;
    h.setPersonalTimer(&at);
    EXPECT_EQ(h.getPersonalTimer(), &at);
}