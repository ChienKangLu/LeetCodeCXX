#include "Question238TestBase.hpp"

typedef testing::Types<Question238::Solution1, Question238::Solution2>
    TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question238::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question238::Solution2>()) {
      return "Solution2";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question238TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question238Test, Question238TestBase, TestTypes,
                               TypeNames);