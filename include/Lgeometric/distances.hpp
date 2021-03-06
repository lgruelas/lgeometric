#ifndef LGEOMETRIC_DISTANCES_HPP_
#define LGEOMETRIC_DISTANCES_HPP_

#include <cmath>
#include "Point2D.hpp"

namespace lgeometric {
    
    template <class T>
    inline double manhattan(const Point2D<T>& p1, const Point2D<T>& p2) {
        return abs(p1.getX() - p2.getX()) + abs(p1.getY() - p2.getY());
    }

    template <class T>
    inline double euclidean(const Point2D<T>& p1, const Point2D<T>& p2) {
        return sqrt(pow(p1.getX()-p2.getX(), 2) + pow(p1.getY()-p2.getY(), 2));
    }

    template <class T>
    inline double minkowski3(const Point2D<T>& p1, const Point2D<T>& p2) {
        return cbrt(pow(p1.getX()-p2.getX(), 3) + pow(p1.getY()-p2.getY(), 3));
    } 

}

#endif  // LGEOMETRIC_DISTANCES_HPP_

