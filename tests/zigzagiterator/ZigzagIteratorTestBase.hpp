#include "gtest/gtest.h"
#include "questions/zigzagiterator/Solution.hpp"

template <typename T>
class ZigzagIteratorTestBase : public ::testing::Test 
{
protected:
  void SetUp(vector<int> v1, vector<int> v2) {
    this->v1 = v1;
    this->v2 = v2;
    this->solution = new T(this->v1, this->v2);
  }

  void TearDown() override {
    delete this->solution;
  }

  T* solution = nullptr;
  vector<int> v1;
  vector<int> v2;

  vector<int> runZigzag() {
    vector<int> result{};
    while (this->solution->hasNext()) {
      result.push_back(this->solution->next());
    }
    return result;
  }
};

TYPED_TEST_SUITE_P(ZigzagIteratorTestBase);

TYPED_TEST_P(ZigzagIteratorTestBase, test1)
{
    // GIVEN
    this->SetUp(vector<int>{1, 2}, vector<int>{3, 4, 5, 6});
    
    // WHEN
    vector<int> result = this->runZigzag();

    // THEN
    vector<int> expected{1, 3, 2, 4, 5, 6};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(ZigzagIteratorTestBase, test2)
{
    // GIVEN
    this->SetUp(vector<int>{1, 2}, vector<int>{});
    
    // WHEN
    vector<int> result = this->runZigzag();

    // THEN
    vector<int> expected{1, 2};
    ASSERT_EQ(result, expected);
}

TYPED_TEST_P(ZigzagIteratorTestBase, test3)
{
    // GIVEN
    this->SetUp(vector<int>{}, vector<int>{1, 2});
    
    // WHEN
    vector<int> result = this->runZigzag();

    // THEN
    vector<int> expected{1, 2};
    ASSERT_EQ(result, expected);
}