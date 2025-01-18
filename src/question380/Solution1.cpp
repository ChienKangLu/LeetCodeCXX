#ifndef QUESTION380_SOLUTION1_H_
#define QUESTION380_SOLUTION1_H_

#include <cstdlib>

#include "questions/question380/Solution.hpp"

namespace Question380 {

bool Solution1::insert(int val) {
  auto it = map.find(val);
  if (it != map.end()) {
    return false;
  }

  map[val] = vector.size();
  vector.push_back(val);
  return true;
}

bool Solution1::remove(int val) {
  auto it = map.find(val);
  if (it == map.end()) {
    return false;
  }

  const auto index = map[val];
  const auto last = vector[vector.size() - 1];

  // Move last to index of val
  vector[index] = last;
  map[last] = index;

  // Delete last
  vector.pop_back();
  map.erase(val);

  return true;
}

int Solution1::getRandom() { return vector[rand() % vector.size()]; }
}  // namespace Question380

#endif