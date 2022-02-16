#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, DivEvalNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->evaluate(), 2.000000);
  delete op1, op2, res;
}

TEST(DivTest, DivEvalNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->evaluate(), -2);
  delete op1, op2, res;
}

TEST(DivTest, DivEvalZero){
  Base *op1 = new Op(0.0);
  Base *op2 = new Op(8.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->evaluate(), 0.000000);
  delete op1, op2, res;
}

TEST(DivTest, DivEvalLarge){
  Base *op1 = new Op(9645.0);
  Base *op2 = new Op(643.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->evaluate(), 15.000000);
  delete op1, op2, res;
}


TEST(DivTest, DivStringNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000/4.000000)");
  delete op1, op2, res;
}

TEST(DivTest, DivStringNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->stringify(),"(-8.000000/4.000000)");
  delete op1, op2, res;
}

TEST(DivTest, DivStringZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000/0.000000)");
  delete op1, op2, res;
}

TEST(DivTest, DivStringLarge){
  Base *op1 = new Op(9645.0);
  Base *op2 = new Op(643.0);
  Base *res = new Div(op1, op2);
  EXPECT_EQ(res->stringify(),"(9645.000000/643.000000)");
  delete op1, op2, res;
}

#endif
