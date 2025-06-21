#include "Question380TestBase.hpp"

typedef testing::Types<Question380::Solution1> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question380::Solution1>())
    {
      return "Solution1";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question380TestBase, 
                            test1);

INSTANTIATE_TYPED_TEST_SUITE_P(Question380Test, Question380TestBase, TestTypes, TypeNames);