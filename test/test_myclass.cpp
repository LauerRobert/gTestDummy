#include "gtest/gtest.h"
#include "myclass.hpp"

TEST(MyClassTest, testDefaultCtor)
{
   MyClass my_class;

   ASSERT_EQ(my_class.getValue(), 3);
}

TEST(MyClassTest, testParameterCtor)
{
   MyClass my_class{5};

   ASSERT_EQ(my_class.getValue(), 5);
}