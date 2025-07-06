#include "Question28TestBase.hpp"

typedef testing::Types<Question28::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question28::Solution1>()) {
      return "Solution1";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question28TestBase, test1, test2, test3, test4);

INSTANTIATE_TYPED_TEST_SUITE_P(Question28Test, Question28TestBase, TestTypes,
                               TypeNames);