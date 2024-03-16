#ifndef QUESTIONS_FIRST_UNIQUE_NUMBER_FIRST_UNIQUE_NUMBER_H_
#define QUESTIONS_FIRST_UNIQUE_NUMBER_FIRST_UNIQUE_NUMBER_H_

#include "../Question.hpp"
#include <vector>

using namespace std;

// LeetCode 1429. First Unique Number
/**
 * You have a queue of integers, you need to retrieve the first unique integer in the queue.
 * Implement the FirstUnique class:
 *    - FirstUnique(int[] nums) Initializes the object with the numbers in the queue.
 *    - int showFirstUnique() returns the value of the first unique integer of the queue, and returns -1 if there is no such integer.
 *    - void add(int value) insert value to the queue.
 * 
 * Constraints:
 *    - 1 <= nums.length <= 10^5
 *    - 1 <= nums[i] <= 10^8
 *    - 1 <= value <= 10^8
 *    - At most 50000 calls will be made to showFirstUnique and add.
*/
class FirstUniqueNumber : public Question 
{
public:
  FirstUniqueNumber(vector<int>& nums) : nums(nums) {};

  virtual int showFirstUnique() = 0;

  virtual void add(int value) = 0;

protected:
  vector<int> nums;
};

#endif

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */