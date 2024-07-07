#ifndef QUESTIONS_QUESTION224_SOLUTION_H_
#define QUESTIONS_QUESTION224_SOLUTION_H_

#include "Question224.hpp"

#include <stack>

namespace Question224
{
class Solution1 : Question224
{
public:
  int calculate(string s) override;

private:
  bool isDigit(const char &c);

  std::stack<int> numbers;
};


}  // namespace Question224

#endif