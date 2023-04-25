#include <cstdint>
#include <tuple>

#include "gtest/gtest.h"

#include "myfunction.hpp"


using TestTuple = std::tuple<std::int32_t, std::int32_t, std::string>;


class MyFunctionTest : public ::testing::TestWithParam<TestTuple>
{
};


// negative equivalence class
INSTANTIATE_TEST_CASE_P(NegativeInputsReturnMinusOne, MyFunctionTest, ::testing::Values(
   TestTuple{std::numeric_limits<std::int32_t>::lowest(), -1, "lower equivalence class limit"},
   TestTuple{-1, -1, "upper equivalence class limit"}
));

// zero equivalence class
INSTANTIATE_TEST_CASE_P(ZeroInputReturnsZero, MyFunctionTest, ::testing::Values(
   TestTuple{0, 0, "zero equivalence class"}
));

// positive equivalence class
INSTANTIATE_TEST_CASE_P(PositiveInputsReturnPlusOne, MyFunctionTest, ::testing::Values(
   TestTuple{1, 1, "lower equivalence class limit"},
   TestTuple{std::numeric_limits<std::int32_t>::max(), -1, "upper equivalence class limit"}
));


TEST_P(MyFunctionTest, BordersAreCorrectlySet)
{
   // GIVEN
   const auto& [input, expectedOutput, message] = GetParam();

   // WHEN
   const auto output = myFunction(input);

   // THEN
   EXPECT_EQ(output, expectedOutput) << message;
}
