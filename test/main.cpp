#include "gtest/gtest.h"
#include "VectorUtils.hpp"

TEST(VectorUtilsTest, Initilization) {
  EXPECT_TRUE (VectorUtils::initVector(10));
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}