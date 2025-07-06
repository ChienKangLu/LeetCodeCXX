#ifndef QUESTIONS_QUESTION6_QUESTION6_H_
#define QUESTIONS_QUESTION6_QUESTION6_H_

#include <string>

#include "../Question.hpp"

using namespace std;

// Leetcode 6. Zigzag Conversion
namespace Question6 {
class Question6 : public Question {
 public:
  virtual string convert(string s, int numRows) = 0;
};
}  // namespace Question6

#endif