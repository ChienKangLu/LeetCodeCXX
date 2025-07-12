#include "Question167TestBase.hpp"

typedef testing::Types<Question167::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question167::Solution1>()) {
      return "Solution1";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question167TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question167Test, Question167TestBase, TestTypes,
                               TypeNames);