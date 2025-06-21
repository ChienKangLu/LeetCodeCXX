#ifndef QUESTION150_SOLUTION1_H_
#define QUESTION150_SOLUTION1_H_

#include "questions/question150/Solution.hpp"
#include <functional>

namespace Question150
{
int Solution1::evalRPN(vector<string> &tokens)
{
    for (const auto &token : tokens)
    {
        _stack.push(token);
        const auto top = _stack.top();
        if (top == "+")
        {
            calculate([](int left, int right) -> int { return left + right; });
        }
        else if (top == "-")
        {
            calculate([](int left, int right) -> int { return left - right; });
        }
        else if (top == "*")
        {
            calculate([](int left, int right) -> int { return left * right; });
        }
        else if (top == "/")
        {
            calculate([](int left, int right) -> int { return left / right; });
        }
    }
    return stoi(_stack.top());
}

void Solution1::calculate(std::function<int(int, int)> func)
{
    _stack.pop(); // pop operation
    auto right = _stack.top();
    _stack.pop();
    auto left = _stack.top();
    _stack.pop();
    auto result = func(stoi(left), stoi(right));
    _stack.push(to_string(result));
}
} // namespace Question150

#endif