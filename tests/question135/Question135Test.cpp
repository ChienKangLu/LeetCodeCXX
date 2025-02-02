#include "Question135TestBase.hpp"

typedef testing::Types<Question135::Solution1, Question135::Solution2>
    TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question135::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question135::Solution2>()) {
      return "Solution2";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question135TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question135Test, Question135TestBase, TestTypes,
                               TypeNames);