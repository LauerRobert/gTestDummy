#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "myclass.hpp"

TEST(MyClassTest, explicitSuccessAndFailure)
{
   SUCCEED();
   // FAIL();
   // ADD_FAILURE();
   if(1!=2)
   {
      // ADD_FAILURE_AT(__FILE__, __LINE__) << "Expected: " << 1 << ", actual: " << 2;
   }
}

TEST(MyClassTest, generalizedAssertion)
{
   using testing::Eq, testing::Not, testing::IsNan;

   EXPECT_THAT(3, Eq(3));
   ASSERT_THAT(3.2F, Not(IsNan()));
}

TEST(MyClassTest, vectorElementsAreSetCorrectly)
{
   using testing::UnorderedElementsAre;

   std::vector<std::int32_t> myVec{1, 3, 2};

   EXPECT_THAT(myVec, UnorderedElementsAre(1, 2, 3));
}

TEST(MyClassTest, booleanConditions)
{
   EXPECT_TRUE(1 < 3);
   ASSERT_FALSE(2 == 4);
}

TEST(MyClassTest, binaryComparison)
{
   EXPECT_EQ(1, 1);   // ==
   ASSERT_NE(1, 2);   // !=
   EXPECT_LT(1, 2);   // <
   ASSERT_LE(1, 1);   // <=
   EXPECT_GT(1, 0);   // >
   ASSERT_GE(1, 1);   // >=
}

TEST(MyClassTest, floatingPointComparison)
{
   EXPECT_NEAR(1.2, 1.3, 0.15);
   EXPECT_FLOAT_EQ(1.2F, 1.2F);
   EXPECT_DOUBLE_EQ(1.2, 1.2);
}

TEST(MyClassTest, skippingTest)
{
   EXPECT_NEAR(1.2, 1.3, 0.15);
   EXPECT_FLOAT_EQ(1.2F, 1.2F);
   EXPECT_DOUBLE_EQ(1.2, 1.2);
   GTEST_SKIP() << "Do not forget to remove this before pushing!";
}