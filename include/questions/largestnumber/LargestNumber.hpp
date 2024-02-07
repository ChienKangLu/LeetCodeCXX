#ifndef QUESTIONS_LARGEST_NUMBER_LARGEST_NUMBER_H_
#define QUESTIONS_LARGEST_NUMBER_LARGEST_NUMBER_H_

#include "../Question.hpp"
#include <vector>
#include <string>

using namespace std;

class LargestNumber : public Question 
{
public:
  virtual string largestNumber(vector<int>& nums) = 0;
};

#endif