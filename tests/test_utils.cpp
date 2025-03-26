#include <gtest/gtest.h>
#include "../include/utils.h"


TEST(UtilsTest, TestAdd) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(UtilsTest, TestSubtract) {
    EXPECT_EQ(sub(5, 3), 2);
    EXPECT_EQ(sub(1, 1), 0);
}

TEST(UtilsTest, TestMultiply) {
    EXPECT_EQ(mul(2.0, 3.0), 6.0);
    EXPECT_EQ(mul(-1.0, 2.0), -2.0);
}

TEST(UtilsTest, TestDivide) {
    EXPECT_DOUBLE_EQ(div(6.0, 3.0), 2.0);
    EXPECT_NEAR(div(5.0, 2.0), 2.5, 1e-10);
    EXPECT_THROW(div(1.0, 0.0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}