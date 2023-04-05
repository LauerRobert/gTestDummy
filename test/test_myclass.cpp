#include "gtest/gtest.h"
#include "myclass.hpp"

TEST(MyClassTest, testDefaultCtor)
{
   // GIVEN

   // WHEN
   MyClass my_class{};

   // THEN
   ASSERT_EQ(my_class.m_int, 3);
}

TEST(MyClassTest, testParameterCtor)
{
   // GIVEN
   const auto desired_value{5};

   // WHEN
   MyClass my_class{desired_value};

   // THEN
   ASSERT_EQ(my_class.m_int, desired_value);
}

TEST(MyClassTest, testSetter)
{
   // GIVEN
   MyClass my_class{};
   const auto desired_value{5};

   // WHEN
   my_class.setValue(desired_value);

   // THEN
   ASSERT_EQ(my_class.m_int, desired_value);
}

TEST(MyClassTest, testGetter)
{
   // GIVEN
   MyClass my_class{};

   // WHEN
   const auto gottenValue = my_class.getValue();

   // THEN
   ASSERT_EQ(gottenValue, my_class.m_int);
}