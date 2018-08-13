#include "../inc/isBalanced.hpp"
#include <vector>

bool isBalanced(std::string s)
{
    if (s.size() % 2 == 0 && s.size() != 0)
    {
        std::vector<int> a, b, c;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '{') a.push_back(1);
            if (s[i] == '[') b.push_back(1);
            if (s[i] == '(') c.push_back(1);
            if (s[i] == '}') a.pop_back();
            if (s[i] == ']') b.pop_back();
            if (s[i] == ')') c.pop_back();
        }
        if (a.empty() && b.empty() && c.empty()) return 1;
    }
    return 0;
}
