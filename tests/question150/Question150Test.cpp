#include "Question150TestBase.hpp"

typedef testing::Types<Question150::Solution1> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question150::Solution1>())
    {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question150TestBase, 
                            test1,
                            test2,
                            test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question150Test, Question150TestBase, TestTypes, TypeNames);