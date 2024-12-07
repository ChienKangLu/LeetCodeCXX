#include "Question169TestBase.hpp"

typedef testing::Types<Question169::Solution1, Question169::Solution2>
    TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question169::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question169::Solution2>()) {
      return "Solution2";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question169TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question169Test, Question169TestBase, TestTypes,
                               TypeNames);