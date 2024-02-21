#ifndef QUESTIONS_MOVING_AVERAGE_FROM_DATA_STREAM_SOLUTION_H_
#define QUESTIONS_MOVING_AVERAGE_FROM_DATA_STREAM_SOLUTION_H_

#include "MovingAverageFromDataStream.hpp"
#include <deque>

class Solution1 : MovingAverage
{
public:
  Solution1(int size);

  double next(int val) override;

private:
  std::deque<int> queue;
  int sum = 0;
};

#endif