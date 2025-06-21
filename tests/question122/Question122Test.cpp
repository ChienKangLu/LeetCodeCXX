#include "Question122TestBase.hpp"

typedef testing::Types<Question122::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question122::Solution1>()) {
      return "Solution1";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question122TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question122Test, Question122TestBase, TestTypes,
                               TypeNames);