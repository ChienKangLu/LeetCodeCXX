#ifndef QUESTIONS_QUESTION121_QUESTION121_H_
#define QUESTIONS_QUESTION121_QUESTION121_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 121. Best Time to Buy and Sell Stock
namespace Question121 {
class Question121 : public Question {
 public:
  virtual int maxProfit(vector<int>& prices) = 0;
};
}  // namespace Question121

#endif