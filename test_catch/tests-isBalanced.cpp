#include "catch.hpp"
#include "../inc/isBalanced.hpp"

SCENARIO("Is this string balanced?") {
    GIVEN("string {") {
        std::string s = {"{"};
        WHEN("call function isBalanced()")
        {
            THEN("Expect 0")
            {
                REQUIRE(isBalanced(s) == 0);
            }
        }
    }
    GIVEN("string {}") {
        std::string s = {"{"};
        WHEN("call function isBalanced()")
        {
            s = "{}";
            THEN("Expect 1")
            {
                REQUIRE(isBalanced(s) == 1);
            }
        }
    }
}
