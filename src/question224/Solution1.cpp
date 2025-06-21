#ifndef QUESTION224_SOLUTION1_H_
#define QUESTION224_SOLUTION1_H_

#include "questions/question224/Solution.hpp"

namespace Question224 {
int Solution1::calculate(string s) {
  int len = s.length();

  int i = 0;
  int sign = 1;
  numbers.push(0);  // Always keep most recent sum at top
  while (i < len) {
    char c = s[i];
    if (isDigit(c)) {
      int number = 0;
      while (i < len && isDigit(s[i])) {
        number = number * 10 + (s[i] - '0');
        i++;
      };
      i--;

      auto top = numbers.top();  // update sum
      numbers.pop();
      numbers.push(top + sign * number);
    } else if (c == '+') {
      sign = 1;
    } else if (c == '-') {
      sign = -1;
    } else if (c == '(') {
      numbers.push(sign);
      numbers.push(0);
      sign = 1;
    } else if (c == ')') {  // update sum
      auto sumInParentheses = numbers.top();
      numbers.pop();
      auto sign = numbers.top();
      numbers.pop();
      auto sum = numbers.top();
      numbers.pop();
      numbers.push(sumInParentheses * sign + sum);
    }
    i++;
  }

  return numbers.top();
}

bool Solution1::isDigit(const char &c) { return c >= '0' && c <= '9'; }

}  // namespace Question224

#endif