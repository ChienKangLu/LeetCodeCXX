#ifndef QUESTIONS_QUESTION13_QUESTION13_H_
#define QUESTIONS_QUESTION13_QUESTION13_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 13. Roman to Integer
namespace Question13 {
class Question13 : public Question {
 public:
  virtual int romanToInt(string s) = 0;
};
}  // namespace Question13

#endif