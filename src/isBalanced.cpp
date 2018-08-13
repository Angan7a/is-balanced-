#include "../inc/isBalanced.hpp"
#include <vector>

bool isBalanced(std::string s)
{
    if (s.size() % 2 == 0 && s.size() != 0)
    {
        std::vector<int> a;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '{') a.push_back(1);
            if (s[i] == '}') a.pop_back();
        }
        if (a.empty()) return 1;
    }
    return 0;
}
