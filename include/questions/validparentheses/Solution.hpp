#ifndef QUESTIONS_VALID_PARENTHESES_SOLUTION_H_
#define QUESTIONS_VALID_PARENTHESES_SOLUTION_H_

#include "ValidParentheses.hpp"
#include <string>

// Leetcode 20. Valid Parentheses
class Solution1 : public ValidParentheses 
{
public:
  bool isValid(std::string s) override;
};

#endif