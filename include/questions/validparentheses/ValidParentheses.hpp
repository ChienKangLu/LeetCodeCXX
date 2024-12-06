#ifndef QUESTIONS_VALID_PARENTHESES_VALID_PARENTHESES_H_
#define QUESTIONS_VALID_PARENTHESES_VALID_PARENTHESES_H_

#include <string>

#include "../Question.hpp"

class ValidParentheses : public Question {
 public:
  virtual bool isValid(std::string s) = 0;
};

#endif