#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvalTest) {
     srand(2);
     Base *a = new Rand();
     EXPECT_EQ(a->evaluate(),90);
     delete a;
}

TEST(RandTest, RandStringTest) {
     srand(2);
     Base *a = new Rand();
     EXPECT_EQ(a->stringify(),"90.000000");
     delete a;
}

#endif 
