#include "catch.hpp"
#include "../inc/isBalanced.hpp"

SCENARIO("Is this string balanced?") {
    GIVEN("string {") {
        std::string s = {"{"};
        WHEN("call function isBalanced()")
        {
            THEN("Expect")
            {
                REQUIRE(isBalanced(s) == 0);
            }
        }
    }
}
