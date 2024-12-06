#ifndef QUESTIONS_MOVING_AVERAGE_FROM_DATA_STREAM_MOVING_AVERAGE_FROM_DATA_STREAM_H_
#define QUESTIONS_MOVING_AVERAGE_FROM_DATA_STREAM_MOVING_AVERAGE_FROM_DATA_STREAM_H_

#include "../Question.hpp"

// Leetcode 346. Moving Average from Data Stream
class MovingAverage : public Question {
 public:
  MovingAverage(int size) : size(size){};

  virtual double next(int val) = 0;

 protected:
  /**
   * the size of window
   */
  int size;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */

#endif