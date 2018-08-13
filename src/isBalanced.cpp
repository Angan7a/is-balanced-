#include "../inc/isBalanced.hpp"

bool isBalanced(std::string s)
{
    if (s.size()%2 == 0)
    {
        for(int i = 0; i <= s.size()/2; i++)
        {
            auto iter = s.find("{}");
            if (iter == std::string::npos) return 0;
            s.erase(iter, 2);
        }
        if (s.empty()) return 1;
    }
    return 0;
}
