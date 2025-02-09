#include "Question12TestBase.hpp"

typedef testing::Types<Question12::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question12::Solution1>()) {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question12TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question12Test, Question12TestBase, TestTypes,
                               TypeNames);