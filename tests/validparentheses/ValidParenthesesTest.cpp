#include "ValidParenthesesTestBase.hpp"

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

REGISTER_TYPED_TEST_SUITE_P(ValidParenthesesTestBase, 
                            test1,
                            test2,
                            test3,
                            test4,
                            test5,
                            test6,
                            test7);

INSTANTIATE_TYPED_TEST_SUITE_P(ValidParenthesesTest, ValidParenthesesTestBase, TestTypes, TypeNames);