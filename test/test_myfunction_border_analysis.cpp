#include <cstdint>

#include "gtest/gtest.h"

#include "myfunction.hpp"


TEST(MyFunctionTest, negativeInputReturnsMinusOne)
{
   // Arrange
   constexpr std::int32_t input1{std::numeric_limits<std::int32_t>::lowest()};   // lower equivalence class border
   constexpr std::int32_t expectedOutput1{-1};

   constexpr std::int32_t input2{-1};                                            // upper equivalence class border
   constexpr std::int32_t expectedOutput2{-1};

   // Act
   auto output1{myFunction(input1)};
   auto output2{myFunction(input2)};

   // Assert
   EXPECT_EQ(output1, expectedOutput1);
   EXPECT_EQ(output2, expectedOutput2);
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
   constexpr std::int32_t input1{1};                                          // lower equivalence class border
   constexpr std::int32_t expectedOutput1{1};

   constexpr std::int32_t input2{std::numeric_limits<std::int32_t>::max()};   // upper equivalence class border
   constexpr std::int32_t expectedOutput2{1};

   // Act
   auto output1{myFunction(input1)};
   auto output2{myFunction(input2)};

   // Assert
   EXPECT_EQ(output1, expectedOutput1);
   EXPECT_EQ(output2, expectedOutput2);
}