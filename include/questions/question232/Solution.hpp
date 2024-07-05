#ifndef QUESTIONS_QUESTION232_SOLUTION_H_
#define QUESTIONS_QUESTION232_SOLUTION_H_

#include "Question232.hpp"

#include <stack>

namespace Question232
{
class Solution1 : Question232
{
public:
  void push(int x) override;
    
  int pop() override;
    
  int peek() override;
    
  bool empty() override;

private:
  void moveTo(std::stack<int> &source, std::stack<int> &dest);

  std::stack<int> _s1;
  std::stack<int> _s2;
};
}  // namespace Question232

#endif