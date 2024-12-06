#include "Question224TestBase.hpp"

typedef testing::Types<Question224::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question224::Solution1>()) {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question224TestBase, test1, test2, test3, test4,
                            test5, test6);

INSTANTIATE_TYPED_TEST_SUITE_P(Question224Test, Question224TestBase, TestTypes,
                               TypeNames);