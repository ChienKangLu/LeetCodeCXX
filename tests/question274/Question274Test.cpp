#include "Question274TestBase.hpp"

typedef testing::Types<Question274::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question274::Solution1>()) {
      return "Solution1";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question274TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question274Test, Question274TestBase, TestTypes,
                               TypeNames);