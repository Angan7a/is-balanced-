#include "../inc/isBalanced.hpp"

bool isBalanced(std::string s)
{
    if (s.size() % 2 == 0 && s.size() != 0)
    {
        int r = 0;
        for (int i = 0; i < s.size()/2; i++)
        {
            if (s[i] == '{' && s[s.size()-1-i] == '}') r++;
        }
        if (r == s.size()/2) return 1;
    }
    return 0;
}
