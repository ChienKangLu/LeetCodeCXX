#ifndef QUESTIONS_QUESTION232_QUESTION232_H_
#define QUESTIONS_QUESTION232_QUESTION232_H_

#include "../Question.hpp"

// Leetcode 232. Implement Queue using Stacks
namespace Question232 {
class Question232 : public Question {
 public:
  virtual void push(int x) = 0;

  virtual int pop() = 0;

  virtual int peek() = 0;

  virtual bool empty() = 0;
};
}  // namespace Question232

#endif