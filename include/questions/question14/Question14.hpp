#ifndef QUESTIONS_QUESTION14_QUESTION14_H_
#define QUESTIONS_QUESTION14_QUESTION14_H_

#include <string>
#include <vector>

#include "../Question.hpp"

// Leetcode 14. Longest Common Prefix
namespace Question14 {
class Question14 : public Question {
 public:
  virtual std::string longestCommonPrefix(std::vector<std::string>& strs) = 0;
  /* Please declare pure virtual function according to question */
};
}  // namespace Question14

#endif