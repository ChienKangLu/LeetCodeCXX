#ifndef QUESTIONS_QUESTION380_QUESTION380_H_
#define QUESTIONS_QUESTION380_QUESTION380_H_

#include "../Question.hpp"

// Leetcode 380. Insert Delete GetRandom O(1)
namespace Question380 {
class Question380 : public Question {
 public:
  virtual bool insert(int val) = 0;

  virtual bool remove(int val) = 0;

  virtual int getRandom() = 0;
};
}  // namespace Question380

#endif