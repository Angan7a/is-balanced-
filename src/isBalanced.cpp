#include "../inc/isBalanced.hpp"
#include <iostream>
bool isBalanced(std::string s)
{
    if (s.size()%2 == 0 && s.size() != 0)
    {
        while(!s.empty())
        {
            std::size_t pos;
            pos = s.find("{}");
            if (pos == std::string::npos) pos = s.find("[]");
            if (pos == std::string::npos) pos = s.find("()");
            if (pos == std::string::npos) return false;
            s.erase(pos, 2);
        }
        return true;
    }
    return false;
}
