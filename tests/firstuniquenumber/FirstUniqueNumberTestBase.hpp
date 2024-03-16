#include "gtest/gtest.h"
#include "questions/firstuniquenumber/Solution.hpp"

template <typename T>
class FirstUniqueNumberTestBase : public ::testing::Test 
{
protected:
  void SetUp(vector<int>& nums) {
    this->solution = new T(nums);
  }

  void TearDown() override {
    delete this->solution;
  }

  T* solution = nullptr;
};

TYPED_TEST_SUITE_P(FirstUniqueNumberTestBase);

TYPED_TEST_P(FirstUniqueNumberTestBase, test1)
{
    // GIVEN
    vector<int> nums{2, 3, 5};
    this->SetUp(nums);
    
    // WHEN & THEN
    EXPECT_EQ(this->solution->showFirstUnique(), 2);
    this->solution->add(5);
    EXPECT_EQ(this->solution->showFirstUnique(), 2);
    this->solution->add(2);
    EXPECT_EQ(this->solution->showFirstUnique(), 3);
    this->solution->add(3);
    EXPECT_EQ(this->solution->showFirstUnique(), -1);
}

TYPED_TEST_P(FirstUniqueNumberTestBase, test2)
{
    // GIVEN
    vector<int> nums{7, 7, 7, 7, 7, 7};
    this->SetUp(nums);
    
    // WHEN & THEN
    EXPECT_EQ(this->solution->showFirstUnique(), -1);
    this->solution->add(7);
    this->solution->add(3);
    this->solution->add(3);
    this->solution->add(7);
    this->solution->add(17);
    EXPECT_EQ(this->solution->showFirstUnique(), 17);
}

TYPED_TEST_P(FirstUniqueNumberTestBase, test3)
{
    // GIVEN
    vector<int> nums{809};
    this->SetUp(nums);
    
    // WHEN & THEN
    EXPECT_EQ(this->solution->showFirstUnique(), 809);
    this->solution->add(809);
    EXPECT_EQ(this->solution->showFirstUnique(), -1);
}