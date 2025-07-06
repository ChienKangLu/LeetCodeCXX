#ifndef QUESTIONS_QUESTION28_QUESTION28_H_
#define QUESTIONS_QUESTION28_QUESTION28_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 28. Find the Index of the First Occurrence in a String
namespace Question28 {
class Question28 : public Question {
 public:
  virtual int strStr(string haystack, string needle) = 0;
};
}  // namespace Question28

#endif