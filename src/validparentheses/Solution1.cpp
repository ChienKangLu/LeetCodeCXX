#ifndef VALID_PARENTHESES_SOLUTION1_H_
#define VALID_PARENTHESES_SOLUTION1_H_

#include "questions/validparentheses/Solution.hpp"
#include <stack>

using namespace std;

bool Solution1::isValid(std::string s)
{
    stack<char> brackets;
    for (const char &c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            brackets.push(c);
        }
        else if (!brackets.empty())
        {
            const char &top = brackets.top();
            if (top == '(' && c == ')' || top == '[' && c == ']' || top == '{' && c == '}')
            {
                brackets.pop();
            }
            else
            {
                return false; // Not found corresponding bracket from stack
            }
        }
        else
        {
            return false; // Found ')', ']' or '}' while stack is empty.
        }
    }
    return brackets.empty();
}

#endif