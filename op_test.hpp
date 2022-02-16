#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateNeg) {
    Op* test = new Op(-10);
    EXPECT_EQ(test->evaluate(), -10);
}

TEST(OpTest, OpStringNonZero) {
   Op* test = new Op(8);
   EXPECT_EQ("8.000000", test->stringify());
}

TEST(OpTest, OpStringNeg) {
   Op* test = new Op(-10);
   EXPECT_EQ("-10.000000", test->stringify());
}

#endif //__OP_TEST_HPP__
