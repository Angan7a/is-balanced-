#include "../inc/isBalanced.hpp"
#include <vector>

bool isBalanced(std::string s)
{
    if (s.size() % 2 == 0 && s.size() != 0)
    {
        std::vector<char> a;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
                case '{' : a.push_back('{'); break;
                case '[' : a.push_back('['); break;
                case '(' : a.push_back('('); break;
                case '}' :
                    if (a.empty() || a.back() != '{') return 0;
                    a.pop_back(); break;
                case ']' :
                    if (a.empty() || a.back() != '[') return 0;
                    a.pop_back(); break;
                case ')' :
                    if (a.empty() || a.back() != '(') return 0;
                    a.pop_back(); break;
            }
        }
        if (a.empty()) return 1;
    }
    return 0;
}
