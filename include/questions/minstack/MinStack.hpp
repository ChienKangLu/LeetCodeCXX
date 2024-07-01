#ifndef QUESTIONS_MIN_STACK_MIN_STACK_H_
#define QUESTIONS_MIN_STACK_MIN_STACK_H_

#include "../Question.hpp"

// Leetcode 155. Min Stack
class MinStack : public Question 
{
public:
    virtual void minstackPush(int val) = 0;
    
    virtual void minstackPop() = 0;
    
    virtual int minstackTop() = 0;
    
    virtual int minstackGetMin() = 0;
};

#endif