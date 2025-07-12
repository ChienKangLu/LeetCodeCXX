#include "Question125TestBase.hpp"

typedef testing::Types<Question125::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question125::Solution1>()) {
      return "Solution1";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question125TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question125Test, Question125TestBase, TestTypes,
                               TypeNames);