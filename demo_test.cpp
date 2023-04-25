#include <iostream>

#include "unittestcore.hpp"

using namespace std;

int func(int value) { return value; }

TEST_CASE(assert_eq) {
  ASSERT_EQ(func(1), 1);
  ASSERT_EQ(1, 1);
  ASSERT_EQ(1 + 2, 1 + 1 + 1);
}

TEST_CASE(assert_true) {
  ASSERT_TRUE(true);
  ASSERT_TRUE(10 > 2);
  ASSERT_TRUE(func(1) == 1);
}

TEST_CASE(assert_false) {
  ASSERT_FALSE(false);
  ASSERT_FALSE(2 > 10);
  ASSERT_FALSE(func(1) != 1);
}

TEST_CASE(assert_ne) {
  ASSERT_NE(10, 11);
  ASSERT_NE(10 + 10, 11 + 11);
  ASSERT_NE(func(1), func(1) + func(9));
}

TEST_CASE(assert_gt) {
  ASSERT_GT(1, 0);
  ASSERT_GT(func(1), 0);
  ASSERT_GT(func(3), func(1) + func(1));
}

TEST_CASE(assert_ge) {
  ASSERT_GE(1, 1);
  ASSERT_GE(func(1), 1);
  ASSERT_GE(func(3), func(1) + func(1) + func(1));
}

TEST_CASE(assert_lt) {
  ASSERT_LT(0, 1);
  ASSERT_LT(func(1), 2);
  ASSERT_LT(func(3), func(1) + func(1) + func(1) + func(1));
}

TEST_CASE(assert_le) {
  ASSERT_LE(0, 1);
  ASSERT_LE(1, 1);
  ASSERT_LE(func(2), 2);
  ASSERT_LE(func(3), func(1) + func(1) + func(1));
}

RUN_ALL_TESTS();
