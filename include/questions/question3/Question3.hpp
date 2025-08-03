#ifndef QUESTIONS_QUESTION3_QUESTION3_H_
#define QUESTIONS_QUESTION3_QUESTION3_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 3. Longest Substring Without Repeating Characters
namespace Question3 {
class Question3 : public Question {
 public:
  virtual int lengthOfLongestSubstring(string s) = 0;
};
}  // namespace Question3

#endif