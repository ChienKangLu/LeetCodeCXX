#ifndef QUESTIONS_QUESTION58_QUESTION58_H_
#define QUESTIONS_QUESTION58_QUESTION58_H_

#include <string>

#include "../Question.hpp"

// Leetcode 58. Length of Last Word
namespace Question58 {
class Question58 : public Question {
 public:
  virtual int lengthOfLastWord(std::string s) = 0;
};
}  // namespace Question58

#endif