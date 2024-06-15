#include "../header/ActionTimer.h"
#include <gtest/gtest.h>

TEST(ConstructorTests, DefaultParams) {
    ActionTimer at;
    EXPECT_EQ(at.getTimerSpeed(), 0);
    EXPECT_EQ(at.getMaxProgress(), 0);
    EXPECT_EQ(at.getTimerProgress(), 0);
}

TEST(ConstructorTests, inputParams) {
    ActionTimer at(2,10);
    EXPECT_EQ(at.getTimerSpeed(), 2);
    EXPECT_EQ(at.getMaxProgress(), 10);
    EXPECT_EQ(at.getTimerProgress(), 0);
}