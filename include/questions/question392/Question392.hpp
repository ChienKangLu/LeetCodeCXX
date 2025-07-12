#ifndef QUESTIONS_QUESTION392_QUESTION392_H_
#define QUESTIONS_QUESTION392_QUESTION392_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 392. Is Subsequence
namespace Question392 {
class Question392 : public Question {
 public:
  virtual bool isSubsequence(string s, string t) = 0;
};
}  // namespace Question392

#endif