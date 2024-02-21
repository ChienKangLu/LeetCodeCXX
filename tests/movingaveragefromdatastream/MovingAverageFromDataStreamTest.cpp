#include "MovingAverageFromDataStreamTestBase.hpp"

typedef testing::Types<Solution1> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Solution1>())
    {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(MovingAverageFromDataStreamTestBase, 
                            test1);

INSTANTIATE_TYPED_TEST_SUITE_P(MovingAverageFromDataStreamTest, MovingAverageFromDataStreamTestBase, TestTypes, TypeNames);