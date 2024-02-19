#ifndef IMPLEMENT_STACK_USING_QUEUES_SOLUTION1_H_
#define IMPLEMENT_STACK_USING_QUEUES_SOLUTION1_H_

#include "questions/implementstackusingqueues/Solution.hpp"

Solution1::Solution1() {}

void Solution1::push(int x) {
    queue.push(x);
    int times = queue.size() - 1;
    for (int i = 0 ; i < times; i++) {
        queue.push(queue.front());
        queue.pop();
    }
}

int Solution1::pop() {
    int _top = top();
    queue.pop();
    return _top;
}

int Solution1::top() {
    return queue.front();
}

bool Solution1::empty() {
    return queue.empty();
}

#endif