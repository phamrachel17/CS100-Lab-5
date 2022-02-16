#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubEvalNonZero){
  Base *op1 = new Op(15.0);
  Base *op2 = new Op(5.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->evaluate(), 10.000000);
  delete op1, op2, res;
}

TEST(SubTest, SubEvalNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(-10.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->evaluate(), 2.000000);
  delete op1, op2, res;
}

TEST(SubTest, SubEvalZero){
  Base *op1 = new Op(0.0);
  Base *op2 = new Op(8.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->evaluate(), -8.000000);
  delete op1, op2, res;
}

TEST(SubTest, SubEvalLarge){
  Base *op1 = new Op(9645.0);
  Base *op2 = new Op(643.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->evaluate(), 9002.000000);
  delete op1, op2, res;
}


TEST(SubTest, SubStringNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000-4.000000)");
  delete op1, op2, res;
}

TEST(SubTest, SubStringNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->stringify(),"(-8.000000-4.000000)");
  delete op1, op2, res;
}

TEST(SubTest, SubStringZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000-0.000000)");
  delete op1, op2, res;
}

TEST(SubTest, SubStringLarge){
  Base *op1 = new Op(9645.0);
  Base *op2 = new Op(643.0);
  Base *res = new Sub(op1, op2);
  EXPECT_EQ(res->stringify(),"(9645.000000-643.000000)");
  delete op1, op2, res;
}

#endif

