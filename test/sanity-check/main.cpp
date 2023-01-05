#include <gtest/gtest.h>

TEST(SanityCheck, StringAssertion) {
  EXPECT_STRNE("hello", "world");
}

TEST(SanityCheck, IntegerAssertion) {
  EXPECT_EQ(7 * 6, 42);
}