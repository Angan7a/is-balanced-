#include "gtest/gtest.h"
#include "../inc/isBalanced.hpp"

TEST(isBalanced, noPass)
{
    EXPECT_EQ(isBalanced("{"), 0);
    EXPECT_EQ(isBalanced("{{{}"), 0);
    EXPECT_EQ(isBalanced(""), 0);
    EXPECT_EQ(isBalanced("[["), 0);
}

TEST(isBalanced, Pass)
{
    EXPECT_EQ(isBalanced("{}"), 1);
    EXPECT_EQ(isBalanced("{{}}"), 1);
    EXPECT_EQ(isBalanced("{{{}}}"), 1);
    EXPECT_EQ(isBalanced("{}{{}}"), 1);
}
