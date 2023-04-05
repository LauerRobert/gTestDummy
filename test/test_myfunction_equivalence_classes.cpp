#include <cstdint>

#include "gtest/gtest.h"

#include "myfunction.hpp"


TEST(MyFunctionTest, negativeInputReturnsMinusOne)
{
   // GIVEN
   constexpr std::int32_t input{-10};
   constexpr std::int32_t expectedOutput{-1};

   // WHEN
   auto output{myFunction(input)};

   // THEN
   EXPECT_EQ(output, expectedOutput);
}

TEST(MyFunctionTest, zeroInputReturnsZero)
{
   // GIVEN
   constexpr std::int32_t input{0};
   constexpr std::int32_t expectedOutput{0};

   // WHEN
   auto output{myFunction(input)};

   // THEN
   EXPECT_EQ(output, expectedOutput);
}

TEST(MyFunctionTest, positiveInputReturnsPlusOne)
{
   // GIVEN
   constexpr std::int32_t input{7};
   constexpr std::int32_t expectedOutput{1};

   // WHEN
   auto output{myFunction(input)};

   // THEN
   EXPECT_EQ(output, expectedOutput);
}