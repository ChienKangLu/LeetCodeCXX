#ifndef QUESTIONS_QUESTION227_QUESTION227_H_
#define QUESTIONS_QUESTION227_QUESTION227_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 227. Basic Calculator II
namespace Question227 {
class Question227 : public Question {
 public:
  virtual int calculate(string s) = 0;
};
}  // namespace Question227

#endif