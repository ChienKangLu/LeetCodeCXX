#ifndef QUESTION227_SOLUTION1_H_
#define QUESTION227_SOLUTION1_H_

#include "questions/question227/Solution.hpp"

namespace Question227
{
int Solution1::calculate(string s) {
    int len = s.size();
    int i = 0;
    int sign = 1;

    while (i < len) {
        auto const &c = s[i];
        if (isDigit(c)) {
            long number = 0;
            while (i < len && isDigit(s[i])) {
                number = number * 10 + s[i] - '0';
                i++;
            }
            i--;

            _numbers.push(number * sign);
            sign = 1;
        } else if (c == '+' || c == '-') {
            if (shouldCalcualte(c)) {
                calculate();
            }
            sign = c == '+' ? 1 : -1;
             _operators.push('+');
        } else if (c == '*' || c == '/') {
            if (shouldCalcualte(c)) {
                calculate();
            }
            _operators.push(c);
        }
        i++;
    }

    while(!_operators.empty()) {
        calculate();
    }

    return _numbers.top();
}

bool Solution1::isDigit(const char &c) {
    return c >= '0' && c <= '9';
}

bool Solution1::shouldCalcualte(const char &c) {
    if (_operators.empty()) {
        return false;
    }

    auto const &top = _operators.top();
    if (top == '+' || top == '-') {
        return c =='+' || c =='-';
    } else if (top =='*' || top =='/') {
        return true;
    }

    return false;
}

void Solution1::calculate() {
    if (_operators.empty()) {
        return;
    }

    auto const right = _numbers.top();
    _numbers.pop();
    auto const left = _numbers.top();
    _numbers.pop();
    auto const _operator = _operators.top();
    _operators.pop();
    if (_operator == '+') {
        _numbers.push(left + right);
    } else if (_operator == '-') {
        _numbers.push(left - right);
    } else if (_operator == '*') {
        _numbers.push(left * right);
    } else if (_operator == '/') {
        _numbers.push(left / right);
    }
}
}  // namespace Question227

#endif