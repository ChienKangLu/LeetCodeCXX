#ifndef QUESTIONS_QUESTION274_QUESTION274_H_
#define QUESTIONS_QUESTION274_QUESTION274_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 274. H-Index
namespace Question274 {
class Question274 : public Question {
 public:
  virtual int hIndex(vector<int>& citations) = 0;
};
}  // namespace Question274

#endif