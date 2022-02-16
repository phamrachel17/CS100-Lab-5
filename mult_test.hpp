#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvalNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->evaluate(), 32.000000);
  delete op1, op2, res;
}

TEST(MultTest, MultEvalNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->evaluate(), -32.000000);
  delete op1, op2, res;
}

TEST(MultTest, MultEvalZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->evaluate(), 0.000000);
  delete op1, op2, res;
}

TEST(MultTest, MultEvalLarge){
  Base *op1 = new Op(879.0);
  Base *op2 = new Op(234.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->evaluate(), 205686.000000);
  delete op1, op2, res;
}

TEST(MultTest, MultNull){
  Base *op1 = nullptr;
  Base *op2 = new Op(0.0);
  Base *res = new Mult(op1, op2);
  EXPECT_THROW(res, std::invalid_argument);
  delete res, op2;
}

TEST(MultTest, MultStringNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000*4.000000)");
  delete op1, op2, res;
}

TEST(MultTest, MultStringNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->stringify(),"(-8.000000*4.000000)");
  delete op1, op2, res;
}

TEST(MultTest, MultStringZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000*0.000000)");
  delete op1, op2, res;
}

TEST(MultTest, MultStringLarge){
  Base *op1 = new Op(879.0);
  Base *op2 = new Op(234.0);
  Base *res = new Mult(op1, op2);
  EXPECT_EQ(res->stringify(),"(879.000000*234.000000)");
  delete op1, op2, res;
}

#endif
