#include "../inc/isBalanced.hpp"

bool isBalanced(std::string s)
{
    if (s.size()%2 == 0) return 1;
    return 0;
}
