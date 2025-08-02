#include "Question15TestBase.hpp"

typedef testing::Types<Question15::Solution1, Question15::Solution2,
                       Question15::Solution3>
    TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question15::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question15::Solution2>()) {
      return "Solution2";
    } else if (std::is_same<T, Question15::Solution3>()) {
      return "Solution3";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question15TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question15Test, Question15TestBase, TestTypes,
                               TypeNames);