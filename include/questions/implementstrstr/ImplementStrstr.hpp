#ifndef QUESTIONS_IMPLEMENT_STRSTR_IMPLEMENT_STRSTR_H_
#define QUESTIONS_IMPLEMENT_STRSTR_IMPLEMENT_STRSTR_H_

#include "../Question.hpp"
#include <string>

// Leetcode 28. Find the Index of the First Occurrence in a String
class ImplementStrstr : public Question 
{
public:
  virtual int strStr(std::string haystack, std::string needle) = 0;
};

#endif