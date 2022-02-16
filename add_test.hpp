#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddEvalNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->evaluate(), 12.000000);
  delete op1, op2, res;
}


TEST(AddTest, AddEvalNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->evaluate(), -4.000000);
  delete op1, op2, res;
}


TEST(AddTest, AddEvalZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->evaluate(), 8.000000);
  delete op1, op2, res;
}


TEST(AddTest, AddEvalLarge){
  Base *op1 = new Op(879.0);
  Base *op2 = new Op(234.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->evaluate(), 1113.000000);
  delete op1, op2, res;
}


TEST(AddTest, AddStringNonZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000+4.000000)");
  delete op1, op2, res;
}


TEST(AddTest, AddStringNeg){
  Base *op1 = new Op(-8.0);
  Base *op2 = new Op(4.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->stringify(),"(-8.000000+4.000000)");
  delete op1, op2, res;
}


TEST(AddTest, AddStringZero){
  Base *op1 = new Op(8.0);
  Base *op2 = new Op(0.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->stringify(),"(8.000000+0.000000)");
  delete op1, op2, res;
}


TEST(AddTest, AddStringLarge){
  Base *op1 = new Op(879.0);
  Base *op2 = new Op(234.0);
  Base *res = new Add(op1, op2);
  EXPECT_EQ(res->stringify(),"(879.000000+234.000000)");
  delete op1, op2, res;

}

#endif
