#ifndef QUESTIONS_QUESTION150_QUESTION150_H_
#define QUESTIONS_QUESTION150_QUESTION150_H_

#include "../Question.hpp"

#include <vector>
#include <string>

using namespace std;

// Leetcode 150. Evaluate Reverse Polish Notation
namespace Question150
{
class Question150 : public Question 
{
public:
  virtual int evalRPN(vector<string>& tokens) = 0;
};
}  // namespace Question150

#endif