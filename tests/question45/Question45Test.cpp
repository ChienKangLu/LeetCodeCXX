#include "Question45TestBase.hpp"

typedef testing::Types<Question45::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question45::Solution1>()) {
      return "Solution1";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question45TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question45Test, Question45TestBase, TestTypes,
                               TypeNames);