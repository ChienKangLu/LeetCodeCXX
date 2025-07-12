#include "Question392TestBase.hpp"

typedef testing::Types<Question392::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question392::Solution1>()) {
      return "Solution1";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question392TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question392Test, Question392TestBase, TestTypes,
                               TypeNames);