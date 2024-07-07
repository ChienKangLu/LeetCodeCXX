#ifndef QUESTIONS_QUESTION224_QUESTION224_H_
#define QUESTIONS_QUESTION224_QUESTION224_H_

#include "../Question.hpp"

#include <string>

using namespace std;

// Leetcode 224. Basic Calculator
namespace Question224
{
class Question224 : public Question 
{
public:
  virtual int calculate(string s) = 0;
};
}  // namespace Question224

#endif