#include "gtest/gtest.h"
#include "Lgeometric/distances.hpp"
#include "Lgeometric/Point2D.hpp"

class distancesFixture: public ::testing::Test{
    protected:
        void SetUp() override {
            lgeometric::Point2D p1 = lgeometric::Point2D(5.25, 10.3); 
            lgeometric::Point2D p2 = lgeometric::Point2D(0.10, 23.1); 
        }
    TEST_F(functionsTest, manhattan) {
        lgeometric::manhattan(p1, p2);
    }

    TEST_F(functionsTest, euclidean) {
    
    }

    TEST_F(functionsTest, minkowski) {

    }
