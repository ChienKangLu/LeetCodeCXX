#include "Question13TestBase.hpp"

typedef testing::Types<Question13::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question13::Solution1>()) {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question13TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question13Test, Question13TestBase, TestTypes,
                               TypeNames);