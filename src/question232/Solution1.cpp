#ifndef QUESTION232_SOLUTION1_H_
#define QUESTION232_SOLUTION1_H_

#include "questions/question232/Solution.hpp"

namespace Question232
{
void Solution1::push(int x)
{
    moveTo(_s1, _s2);
    _s1.push(x);
    moveTo(_s2, _s1);
}

void Solution1::moveTo(std::stack<int> &source, std::stack<int> &dest)
{
    while (!source.empty())
    {
        auto top = source.top();
        dest.push(top);
        source.pop();
    }
}

int Solution1::pop()
{
    auto value = peek();
    _s1.pop();
    return value;
}

int Solution1::peek()
{
    return _s1.top();
}

bool Solution1::empty()
{
    return _s1.empty();
}
} // namespace Question232

#endif