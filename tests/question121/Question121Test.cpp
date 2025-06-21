#include "Question121TestBase.hpp"

typedef testing::Types<Question121::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question121::Solution1>()) {
      return "Solution1";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question121TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question121Test, Question121TestBase, TestTypes,
                               TypeNames);