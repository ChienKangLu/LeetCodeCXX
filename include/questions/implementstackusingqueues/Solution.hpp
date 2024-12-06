#ifndef QUESTIONS_IMPLEMENT_STACK_USING_QUEUES_SOLUTION_H_
#define QUESTIONS_IMPLEMENT_STACK_USING_QUEUES_SOLUTION_H_

#include <queue>

#include "ImplementStackUsingQueues.hpp"

class Solution1 : MyStack {
 public:
  Solution1();

  void push(int x) override;

  int pop() override;

  int top() override;

  bool empty() override;

 private:
  std::queue<int> queue;
};

#endif