#ifndef QUESTIONS_IMPLEMENT_STACK_USING_QUEUES_IMPLEMENT_STACK_USING_QUEUES_H_
#define QUESTIONS_IMPLEMENT_STACK_USING_QUEUES_IMPLEMENT_STACK_USING_QUEUES_H_

#include "../Question.hpp"

// Leetcode 225. Implement Stack using Queues
class MyStack : Question {
public:
    virtual void push(int x) = 0;

    virtual int pop() = 0;
    
    virtual int top() = 0;
    
    virtual bool empty() = 0;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

#endif