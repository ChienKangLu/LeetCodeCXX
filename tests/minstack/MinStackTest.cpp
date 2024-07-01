#include "MinStackTestBase.hpp"

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

REGISTER_TYPED_TEST_SUITE_P(MinStackTestBase, 
                            test1,
                            test2);

INSTANTIATE_TYPED_TEST_SUITE_P(MinStackTest, MinStackTestBase, TestTypes, TypeNames);