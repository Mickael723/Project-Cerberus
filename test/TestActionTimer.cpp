#include "../header/ActionTimer.h"
#include <gtest/gtest.h>
#include <chrono>

TEST(ConstructorTests, DefaultParams) {
    ActionTimer at;
    EXPECT_EQ(at.getTimerSpeed(), 0);
    EXPECT_EQ(at.getMaxProgress(), 0);
    EXPECT_EQ(at.getTimerProgress(), 0);
}

TEST(ConstructorTests, inputParams) {
    ActionTimer at(2,4,10);
    EXPECT_EQ(at.getTimerSpeed(), 2);
    EXPECT_EQ(at.getMaxProgress(), 10);
    EXPECT_EQ(at.getTimerProgress(), 0);
}

TEST(ProgressBarTests, expectedProgressExecutionTime) {
    ActionTimer at(5,5,10);
    auto start = std::chrono::high_resolution_clock::now();
    at.progressBar();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    EXPECT_NEAR(duration, 50, 25);
}

TEST(ProgressBarTests, expectedProgressionResult) {
    ActionTimer at(10,10,10);
    at.progressBar();
    EXPECT_EQ(at.getTimerProgress(), at.getMaxProgress());
}

TEST(DrainBarTests, expectedDrainExecutionTime) {
    ActionTimer at(5,5,10);
    at.setTimerProgress(at.getMaxProgress());
    auto start = std::chrono::high_resolution_clock::now();
    at.drainBar();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    EXPECT_NEAR(duration, 50, 25);
}

TEST(DrainBarTests, expectedDrainResult) {
    ActionTimer at(10,10,10);
    at.setTimerProgress(at.getMaxProgress());
    at.drainBar();
    EXPECT_EQ(at.getTimerProgress(), 0);
}