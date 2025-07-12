#ifndef QUESTIONS_QUESTION125_QUESTION125_H_
#define QUESTIONS_QUESTION125_QUESTION125_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 125. Valid Palindrome
namespace Question125 {
class Question125 : public Question {
 public:
  virtual bool isPalindrome(string s) = 0;
};
}  // namespace Question125

#endif