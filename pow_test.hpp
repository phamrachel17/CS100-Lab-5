#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowEvalNonZero){
  Base *op1 = new Op(15.0);
  Base *op2 = new Op(5.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->evaluate(), 759375.000000);
  delete op1, op2, res;
}

TEST(PowTest, PowEvalNeg){
  Base *op1 = new Op(-2.0);
  Base *op2 = new Op(-3.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->evaluate(), -0.125000);
  delete op1, op2, res;
}

TEST(PowTest, PowEvalZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->evaluate(), 1.000000);
  delete op1, op2, res;
}

TEST(PowTest, PowEvalZero2){
  Base *op1 = new Op(0.0);
  Base *op2 = new Op(8.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->evaluate(), 0.000000);
  delete op1, op2, res;
}


TEST(PowTest, PowEvalLarge){
  Base *op1 = new Op(12.0);
  Base *op2 = new Op(8.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->evaluate(), 429981696.000000);
  delete op1, op2, res;
}


TEST(PowTest, PowStringNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000**4.000000)");
  delete op1, op2, res;
}

TEST(PowTest, PowStringNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->stringify(),"(-8.000000**4.000000)");
  delete op1, op2, res;
}

TEST(PowTest, PowStringZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000**0.000000)");
  delete op1, op2, res;
}

TEST(PowTest, PowStringLarge){
  Base *op1 = new Op(9645.0);
  Base *op2 = new Op(643.0);
  Base *res = new Pow(op1, op2);
  EXPECT_EQ(res->stringify(),"(9645.000000**643.000000)");
  delete op1, op2, res;
}

#endif

