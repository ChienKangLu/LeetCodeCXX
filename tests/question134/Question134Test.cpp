#include "Question134TestBase.hpp"

typedef testing::Types<Question134::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question134::Solution1>()) {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question134TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question134Test, Question134TestBase, TestTypes,
                               TypeNames);