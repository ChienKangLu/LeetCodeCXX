#ifndef QUESTIONS_QUESTION380_SOLUTION_H_
#define QUESTIONS_QUESTION380_SOLUTION_H_

#include <unordered_map>
#include <vector>

#include "Question380.hpp"

using namespace std;

namespace Question380 {
class Solution1 : Question380 {
 public:
  bool insert(int val) override;

  bool remove(int val) override;

  int getRandom() override;

 private:
  unordered_map<int, int> map{};
  vector<int> vector{};
};
}  // namespace Question380

#endif