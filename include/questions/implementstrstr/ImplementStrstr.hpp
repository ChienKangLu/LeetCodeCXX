#ifndef QUESTIONS_IMPLEMENT_STRSTR_IMPLEMENT_STRSTR_H_
#define QUESTIONS_IMPLEMENT_STRSTR_IMPLEMENT_STRSTR_H_

#include "../Question.hpp"
#include <string>

class ImplementStrstr : public Question 
{
public:
  virtual int strStr(std::string haystack, std::string needle) = 0;
};

#endif