#ifndef QUESTION227_SOLUTION1_H_
#define QUESTION227_SOLUTION1_H_

#include "questions/question227/Solution.hpp"

#include <stack>

namespace Question227
{

int Solution2::calculate(string s)
{
    int length = s.length();
    if (length == 0)
    {
        return 0;
    }

    stack<long> numbers;
    char operation = '+';
    long currentNumber = 0;
    for (int i = 0; i < length; i++)
    {
        char c = s[i];
        if (isdigit(c))
        {
            // assemble char to number
            currentNumber = currentNumber * 10 + c - '0';
        }
        if (!isdigit(c) && !isspace(c) || i == length - 1)
        {
            // drop any non digit and white space char
            // handle the 'last' operation once encounter (1) no digit (2) end of string
            if (operation == '+')
            {
                numbers.push(currentNumber);
            }
            else if (operation == '-')
            {
                numbers.push(-currentNumber);
            }
            else if (operation == '*')
            {
                const auto top = numbers.top();
                numbers.pop();
                numbers.push(top * currentNumber);
            }
            else if (operation == '/')
            {
                const auto top = numbers.top();
                numbers.pop();
                numbers.push(top / currentNumber);
            }
            // reset number
            currentNumber = 0;
            // update operation
            operation = c;
        }
    }

    long result = 0;
    while (!numbers.empty())
    {
        result += numbers.top();
        numbers.pop();
    }

    return result;
}
} // namespace Question227

#endif