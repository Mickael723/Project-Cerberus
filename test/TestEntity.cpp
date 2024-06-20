#include "../header/Entity.h"
#include <limits>
#include <gtest/gtest.h>


TEST(EntityTests, ConstructorNoParams) {
    Entity* e1 = new Entity;
    EXPECT_EQ(e1->getName(), "");
    EXPECT_EQ(e1->getID(), -1);
    delete e1;
}

TEST(EntityTests, ConstructorParams1) {
    Entity* e1 = new Entity("Bob", 01);
    EXPECT_EQ(e1->getName(), "Bob");
    EXPECT_EQ(e1->getID(), 01);
    delete e1;
}

TEST(EntityTests, ConstructorParams2) {
    Entity* e1 = new Entity("g", INT_MAX);
    EXPECT_EQ(e1->getName(), "g");
    EXPECT_EQ(e1->getID(), INT_MAX);
    delete e1;
}

