#include <cstdint>

#include "gtest/gtest.h"

#include "myfunction.hpp"


TEST(MyFunctionTest, negativeInputReturnsMinusOne)
{
   // Arrange
   constexpr std::int32_t input{-10};
   constexpr std::int32_t expectedOutput{-1};

   // Act
   auto output{myFunction(input)};

   // Assert
   EXPECT_EQ(output, expectedOutput);
}

TEST(MyFunctionTest, zeroInputReturnsZero)
{
   // Arrange
   constexpr std::int32_t input{0};
   constexpr std::int32_t expectedOutput{0};

   // Act
   auto output{myFunction(input)};

   // Assert
   EXPECT_EQ(output, expectedOutput);
}

TEST(MyFunctionTest, positiveInputReturnsPlusOne)
{
   // Arrange
   constexpr std::int32_t input{7};
   constexpr std::int32_t expectedOutput{1};

   // Act
   auto output{myFunction(input)};

   // Assert
   EXPECT_EQ(output, expectedOutput);
}