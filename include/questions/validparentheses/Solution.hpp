#ifndef QUESTIONS_VALID_PARENTHESES_SOLUTION_H_
#define QUESTIONS_VALID_PARENTHESES_SOLUTION_H_

#include "ValidParentheses.hpp"
#include <string>

class Solution1 : public ValidParentheses 
{
public:
  bool isValid(std::string s) override;
};

#endif