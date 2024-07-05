#include "Question232TestBase.hpp"

typedef testing::Types<Question232::Solution1> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question232::Solution1>())
    {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question232TestBase, 
                            test1);

INSTANTIATE_TYPED_TEST_SUITE_P(Question232Test, Question232TestBase, TestTypes, TypeNames);