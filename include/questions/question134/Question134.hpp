#ifndef QUESTIONS_QUESTION134_QUESTION134_H_
#define QUESTIONS_QUESTION134_QUESTION134_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 134. Gas Station
namespace Question134 {
class Question134 : public Question {
 public:
  virtual int canCompleteCircuit(vector<int>& gas, vector<int>& cost) = 0;
};
}  // namespace Question134

#endif
