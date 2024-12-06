#include "gmock/gmock-more-matchers.h"
#include "gtest/gtest.h"
#include "questions/movingaveragefromdatastream/Solution.hpp"

using namespace testing;

template <typename T>
class MovingAverageFromDataStreamTestBase : public ::testing::Test {
 protected:
  void SetUp(const int& size) {
    this->size = size;
    this->solution = new T(this->size);
  }

  void TearDown() override {
    this->size = 0;
    delete this->solution;
  }

  T* solution = nullptr;
  int size = 0;
};

TYPED_TEST_SUITE_P(MovingAverageFromDataStreamTestBase);

TYPED_TEST_P(MovingAverageFromDataStreamTestBase, test1) {
  // GIVEN
  this->SetUp(3);

  // WHEN
  std::vector<double> results;
  results.push_back(this->solution->next(1));
  results.push_back(this->solution->next(10));
  results.push_back(this->solution->next(3));
  results.push_back(this->solution->next(5));

  // THEN
  ASSERT_THAT(results,
              ElementsAre(DoubleEq(1.0), DoubleEq(5.5),
                          DoubleNear(4.66667, 0.00001), DoubleEq(6.0)));
}