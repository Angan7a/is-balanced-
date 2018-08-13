#include "gtest/gtest.h"
#include "../inc/isBalanced.hpp"

TEST(isBalanced, noPass)
{
    EXPECT_EQ(isBalanced("{"), 1);
}
