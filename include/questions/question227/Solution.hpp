#ifndef QUESTIONS_QUESTION227_SOLUTION_H_
#define QUESTIONS_QUESTION227_SOLUTION_H_

#include "Question227.hpp"

#include <stack>

using namespace std;

namespace Question227
{
class Solution1 : Question227
{
public:
  int calculate(string s) override;

private:
  bool isDigit(const char &c);
  bool shouldCalcualte(const char &c);
  void calculate();

  stack<long> _numbers;
  stack<char> _operators;
};
}  // namespace Question227

#endif