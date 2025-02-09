#ifndef QUESTIONS_QUESTION12_QUESTION12_H_
#define QUESTIONS_QUESTION12_QUESTION12_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 12. Integer to Roman
namespace Question12 {
class Question12 : public Question {
 public:
  virtual string intToRoman(int num) = 0;
};
}  // namespace Question12

#endif