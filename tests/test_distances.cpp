#include <cmath>

#include "gtest/gtest.h"
#include "Lgeometric/distances.hpp"
#include "Lgeometric/Point2D.hpp"

class DistancesTest: public ::testing::Test{
    protected:
        void SetUp() override {
            p1 = lgeometric::Point2D(5.25, 10.3); 
            p2 = lgeometric::Point2D(0.10, 23.1); 
        }

    lgeometric::Point2D<double> p1;
    lgeometric::Point2D<double> p2;
    
};

TEST_F(DistancesTest, manhattan) {
    EXPECT_DOUBLE_EQ(lgeometric::manhattan(p1, p2), 17.95);
}

TEST_F(DistancesTest, euclidean) {
    EXPECT_DOUBLE_EQ(lgeometric::euclidean(p1, p2), sqrt(190.3625));   
}

TEST_F(DistancesTest, minkowski) {
    EXPECT_DOUBLE_EQ(lgeometric::minkowski3(p1, p2), -pow(1960.561125, 1./3));
}
