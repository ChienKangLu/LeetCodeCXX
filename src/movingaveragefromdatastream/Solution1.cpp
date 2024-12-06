#ifndef MOVING_AVERAGE_FROM_DATA_STREAM_SOLUTION1_H_
#define MOVING_AVERAGE_FROM_DATA_STREAM_SOLUTION1_H_

#include "questions/movingaveragefromdatastream/Solution.hpp"

Solution1::Solution1(int size) : MovingAverage(size)
{
}

double Solution1::next(int val)
{
    if (this->queue.size() == size)
    {
        this->sum -= this->queue.front();
        this->queue.pop_front();
    }

    this->queue.push_back(val);
    this->sum += val;

    return (double)this->sum / queue.size();
}

#endif