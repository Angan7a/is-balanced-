#include "../inc/isBalanced.hpp"

bool isBalanced(std::string s)
{
    if (s.size()%2 == 0)
    {
        auto iter = s.find("{}");
        s.erase(iter, 2);
        if (s.empty()) return 1;
    }
    return 0;
}
