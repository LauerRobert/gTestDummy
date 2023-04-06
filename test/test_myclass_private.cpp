#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "myclass.hpp"

TEST(MyClassTest, incrementWorksPrivate)
{
   // GIVEN
   MyClass my_class{};
   constexpr auto increment{7};
   constexpr auto expected_value{10};

   // WHEN
   my_class.increase(increment);

   // THEN
   ASSERT_EQ(my_class.m_int, expected_value);
}