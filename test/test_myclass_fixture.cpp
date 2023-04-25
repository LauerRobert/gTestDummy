#include "gtest/gtest.h"
#include "myclass.hpp"


class MyClassTest : public ::testing::Test {
protected:
   MyClass m_my_class{};
   int32_t m_desired_value{5};
};

TEST_F(MyClassTest, testDefaultCtor)
{
   // GIVEN

   // WHEN

   // THEN
   ASSERT_EQ(m_my_class.m_int, 3);
}

TEST_F(MyClassTest, testSetter)
{
   // GIVEN

   // WHEN
   m_my_class.setValue(desired_value);

   // THEN
   ASSERT_EQ(m_my_class.m_int, desired_value);
}

TEST_F(MyClassTest, testGetter)
{
   // GIVEN

   // WHEN
   const auto gottenValue = m_my_class.getValue();

   // THEN
   ASSERT_EQ(gottenValue, m_my_class.m_int);
}

TEST(MyClassParamTest, testParameterCtor)
{
   // GIVEN
   const auto desired_value{5};

   // WHEN
   MyClass my_class{desired_value};

   // THEN
   ASSERT_EQ(my_class.m_int, desired_value);
}
