#include "gtest/gtest.h"
#include "myclass.hpp"

TEST(MyClassTest, testDefaultCtor)
{
   // GIVEN
   constexpr auto default_value{3};

   // WHEN
   MyClass my_class{};

   // THEN
   ASSERT_EQ(my_class.m_int, default_value);
}

TEST(MyClassTest, testParameterCtor)
{
   // GIVEN
   constexpr auto desired_value{5};

   // WHEN
   MyClass my_class{desired_value};

   // THEN
   ASSERT_EQ(my_class.m_int, desired_value);
}

TEST(MyClassTest, testSetter)
{
   // GIVEN
   MyClass my_class{};
   constexpr auto desired_value{5};

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

TEST(MyClassTest, testStructEquality)
{
   // GIVEN
   constexpr auto desired_value{5};
   MyClass first{};
   MyClass second{desired_value};

   // WHEN
   first.setValue(desired_value);

   // THEN
   ASSERT_EQ(first, second);
}