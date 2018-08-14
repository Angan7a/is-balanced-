#include "../inc/isBalanced.hpp"
#include <iostream>
bool isBalanced(std::string s)
{
    if (s.size()%2 == 0 && s.size() != 0)
    {
        while(!s.empty())
        {
            std::size_t iter;
            iter = s.find("{}");
            if (iter == std::string::npos) iter = s.find("[]");
            if (iter == std::string::npos) iter = s.find("()");
            if (iter == std::string::npos) return false;
            s.erase(iter, 2);
        }
        return true;
    }
    return 0;
}
