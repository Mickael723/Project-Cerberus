#include "../header/ActionTemplates.h"
#include "../header/ActionList.h"
#include <gtest/gtest.h>


// These tests work under the assumption that Actions are not dynamically allocated. May need to be changed in the future.

// Test fixture for ActionList
class ActionListTest : public ::testing::Test {
protected:
    // void SetUp() override {
    //     // Code for setting up each test goes here
    //     action1 = new Action();
    //     action2 = new Action();
    // }

    // void TearDown() override {
    //     // Code for cleaning up after each test goes here
    //     // delete action1;
    //     // delete action2;
    // }

    ActionList actionList;
    AttackAction punch = AttackAction("Punch", 15, "Deals Damage to target", 1, 10);
    AttackBuffAction focus = AttackBuffAction("Focus", 16, "Raises attack power by 25%", 1, 1.25);
    Action* action1 = &punch;
    Action* action2 = &focus;
};

// Test push_back method
TEST_F(ActionListTest, PushBackIncreasesSize) {
    actionList.push_back(action1);
    EXPECT_EQ(actionList.getMaxIndex(), 1);
    action1 = nullptr; // Prevent double deletion
    actionList.push_back(action2);
    EXPECT_EQ(actionList.getMaxIndex(), 2);
    action2 = nullptr; // Prevent double deletion
}

// Test at method
TEST_F(ActionListTest, AtReturnsCorrectAction) {
    actionList.push_back(action1);
    action1 = nullptr; // Prevent double deletion
    actionList.push_back(action2);
    action2 = nullptr; // Prevent double deletion
    EXPECT_EQ(actionList.at(0), actionList.getActionVector()[0]);
    EXPECT_EQ("Punch", actionList.getActionVector().at(0)->getName());
    EXPECT_EQ(actionList.at(1), actionList.getActionVector()[1]);
    EXPECT_DOUBLE_EQ(BUFF, actionList.getActionVector().at(1)->getActionCategory());
}

// Test remove method
TEST_F(ActionListTest, RemoveDecreasesSize) {
    actionList.push_back(action1);
    action1 = nullptr; // Prevent double deletion
    actionList.push_back(action2);
    action2 = nullptr; // Prevent double deletion
    actionList.remove(actionList.getActionVector()[0]);
    EXPECT_EQ(actionList.getMaxIndex(), 1);
    EXPECT_EQ(actionList.at(0), actionList.getActionVector()[0]);
}

// Test getActionVector method
TEST_F(ActionListTest, GetActionVectorReturnsCorrectVector) {
    actionList.push_back(action1);
    action1 = nullptr; // Prevent double deletion
    actionList.push_back(action2);
    action2 = nullptr; // Prevent double deletion
    auto actions = actionList.getActionVector();
    EXPECT_EQ(actions.size(), 2);
    EXPECT_EQ(actions[0], actionList.getActionVector()[0]);
    EXPECT_EQ(actions[1], actionList.getActionVector()[1]);
}

// Test setMaxIndex method
TEST_F(ActionListTest, SetMaxIndexWorksCorrectly) {
    actionList.setMaxIndex(5);
    EXPECT_EQ(actionList.getMaxIndex(), 5);
}

// Test removing an action that is not in the list
TEST_F(ActionListTest, RemoveNonExistentActionDoesNothing) {
    actionList.push_back(action1);
    action1 = nullptr; // Prevent double deletion
    actionList.remove(action2); // action2 was never added
    EXPECT_EQ(actionList.getMaxIndex(), 1);
    EXPECT_EQ(actionList.at(0), actionList.getActionVector()[0]);
}