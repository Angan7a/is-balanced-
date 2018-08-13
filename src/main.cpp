#include <iostream>
#include "../inc/isBalanced.hpp"

int main()
{
    std::string s;
    std::cout << "Enter string to check if it is balanced: ";
    std::cin >> s;
    std::cout << "Your string is balanced: " << isBalanced(s) << std::endl;
}
