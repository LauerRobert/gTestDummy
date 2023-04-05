#include <cstdint>

#include "gtest/gtest.h"

#include "myfunction.hpp"


TEST(MyFunctionTest, calculationsMatchExpectedOutputs)
{
   // Arrange
   constexpr std::int32_t input1{-10};
   constexpr std::int32_t expectedOutput1{-1};

   constexpr std::int32_t input2{-3};
   constexpr std::int32_t expectedOutput2{-1};

   constexpr std::int32_t input3{0};
   constexpr std::int32_t expectedOutput3{0};

   constexpr std::int32_t input4{5};
   constexpr std::int32_t expectedOutput4{1};

   constexpr std::int32_t input5{7};
   constexpr std::int32_t expectedOutput5{1};

   constexpr std::int32_t input6{12394};
   constexpr std::int32_t expectedOutput6{1};

   // Act
   auto output1{myFunction(input1)};
   auto output2{myFunction(input2)};
   auto output3{myFunction(input3)};
   auto output4{myFunction(input4)};
   auto output5{myFunction(input5)};
   auto output6{myFunction(input6)};

   // Assert
   EXPECT_EQ(output1, expectedOutput1);
   EXPECT_EQ(output2, expectedOutput2);
   EXPECT_EQ(output3, expectedOutput3);
   EXPECT_EQ(output4, expectedOutput4);
   EXPECT_EQ(output5, expectedOutput5);
   EXPECT_EQ(output6, expectedOutput6);
}