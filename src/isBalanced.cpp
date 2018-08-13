#include "../inc/isBalanced.hpp"
#include <iostream>
bool isBalanced(std::string s)
{
    if (s.size()%2 == 0)
    {
        while(!s.empty())
        {
            auto iter = s.find("{}");
            if (iter == std::string::npos) return 0;
            s.erase(iter, 2);
        }
        return 1;
    }
    return 0;
}
