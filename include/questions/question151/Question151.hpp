#ifndef QUESTIONS_QUESTION151_QUESTION151_H_
#define QUESTIONS_QUESTION151_QUESTION151_H_

#include <string>

#include "../Question.hpp"

// Leetcode 151. Reverse Words in a String
namespace Question151 {
class Question151 : public Question {
 public:
  virtual std::string reverseWords(std::string s) = 0;
};
}  // namespace Question151

#endif