#ifndef QUESTIONS_QUESTION227_SOLUTION_H_
#define QUESTIONS_QUESTION227_SOLUTION_H_

#include <stack>

#include "Question227.hpp"

using namespace std;

namespace Question227 {
class Solution1 : Question227 {
 public:
  int calculate(string s) override;

 private:
  bool isDigit(const char &c);
  bool shouldCalcualte(const char &c);
  void calculate();

  stack<long> _numbers;
  stack<char> _operators;
};

class Solution2 : Question227 {
 public:
  int calculate(string s) override;
};
}  // namespace Question227

#endif