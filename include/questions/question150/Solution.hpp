#ifndef QUESTIONS_QUESTION150_SOLUTION_H_
#define QUESTIONS_QUESTION150_SOLUTION_H_

#include <functional>
#include <stack>

#include "Question150.hpp"

namespace Question150 {
class Solution1 : Question150 {
 public:
  int evalRPN(vector<string>& tokens) override;

 private:
  void calculate(std::function<int(int, int)> func);

  stack<string> _stack;
};
}  // namespace Question150

#endif