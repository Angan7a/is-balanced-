#include "catch.hpp"
#include "../inc/isBalanced.hpp"

SCENARIO("Is this string balanced?") {
    GIVEN("string {") {
        std::string s = {"{"};
        WHEN("call function isBalanced()") {
            THEN("Expect FALSE") {
                REQUIRE_FALSE( isBalanced(s) );
            }
        }
    }
    GIVEN("string {}") {
        std::string s = {"{}"};
        WHEN("call function isBalanced()") {
            THEN("Expect TRUE") {
                REQUIRE( isBalanced(s) );
            }
        }
    }
    GIVEN("string {{}{") {
        std::string s = {"{{}{"};
        WHEN("call function isBalanced()") {
            THEN("Expect FALSE") {
                REQUIRE_FALSE( isBalanced(s) );
            }
        }
    }
    GIVEN("string {{}}") {
        std::string s = {"{{}}"};
        WHEN("call function isBalanced()") {
            THEN("Expect TRUE") {
                REQUIRE( isBalanced(s) );
            }
        }
    }
    GIVEN("string {{{}}}") {
        std::string s = {"{{{}}}"};
        WHEN("call function isBalanced()") {
            THEN("Expect TRUE") {
                REQUIRE( isBalanced(s) );
            }
        }
    }
    GIVEN("empty string ") {
        std::string s = {""};
        WHEN("call function isBalanced()") {
            THEN("Expect FALSE") {
                REQUIRE_FALSE( isBalanced(s) );
            }
        }
    }
    GIVEN("string []") {
        std::string s = {"[]"};
        WHEN("call function isBalanced()") {
            THEN("Expect TRUE") {
                REQUIRE( isBalanced(s) );
            }
        }
    }
    GIVEN("string ()") {
        std::string s = {"()"};
        WHEN("call function isBalanced()") {
            THEN("Expect TRUE") {
                REQUIRE( isBalanced(s) );
            }
        }
    }
    GIVEN("string }}}}}}}}}}]{}]") {
        std::string s = {"}}}}}}}}}}]{}]"};
        WHEN("call function isBalanced()") {
            THEN("Expect FALSE") {
                REQUIRE_FALSE( isBalanced(s) );
            }
        }
    }
    GIVEN("string {}{{}}") {
        std::string s = {"{}{{}}"};
        WHEN("call function isBalanced()") {
            THEN("Expect TRUE") {
                REQUIRE( isBalanced(s) );
            }
        }
    }
}
