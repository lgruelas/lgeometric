#ifndef LGEOMETRIC_POINT2D_HPP_
#define LGEOMETRIC_POINT2D_HPP_

namespace lgeometric {

    template <class T>
    class Point2D {
        public:
            Point2D() = default;
            Point2D(T X, T Y): x(X), y(Y) { }
            T const getY() const {
                return y;
            }
            T const getX() const {
                return x;
            }
        private:
            T x, y;
    }; 
}  // lgeometric

#endif  // LGEOMETRIC_POINT2D_HPP_
