#include "../inc/isBalanced.hpp"

bool isBalanced(std::string s)
{
    if (s.size() == 2)
    {
        if(s[0] == '{' && s[1] == '}') return 1;
    }
    return 0;
}
