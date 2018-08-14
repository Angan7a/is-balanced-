#include "gtest/gtest.h"
#include "../inc/isBalanced.hpp"

TEST(isBalanced, noPass)
{
    EXPECT_FALSE(isBalanced("{"));
    EXPECT_FALSE(isBalanced("{{{}"));
    EXPECT_FALSE(isBalanced(""));
    EXPECT_FALSE(isBalanced("[["));
    EXPECT_FALSE(isBalanced("))"));
    EXPECT_FALSE(isBalanced("}}}}}}}}}}]{}]"));
    EXPECT_FALSE(isBalanced("({)}"));
}

TEST(isBalanced, Pass)
{
    EXPECT_TRUE(isBalanced("{}"));
    EXPECT_TRUE(isBalanced("{{}}"));
    EXPECT_TRUE(isBalanced("{{{}}}"));
    EXPECT_TRUE(isBalanced("{}{{}}"));
}
