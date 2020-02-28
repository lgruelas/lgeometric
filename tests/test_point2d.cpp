#include "gtest/gtest.h"
#include "Lgeometric/Point2D.hpp"

TEST(blaTest, test1) {
    lgeometric::Point2D point = lgeometric::Point2D(3,4);
    EXPECT_EQ(point.getX(), 3);
}
