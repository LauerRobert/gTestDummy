#include "gtest/gtest.h"

#include "myclass.hpp"

TEST(ctorTests, testDefaultCtor)
{
   MyClass my_class;

   ASSERT_EQ(my_class.getValue(), 3);
}

TEST(ctorTests, testParameterCtor)
{
   MyClass my_class{5};

   ASSERT_EQ(my_class.getValue(), 5);
}