#ifndef LGEOMETRIC_POINT2D_HPP_
#define LGEOMETRIC_POINT2D_HPP_

namespace lgeometric {

    template <class T>
    class Point2D {
        public:
            Point2D(T x, T y): x(x), y(y) { }
            int getY() {
                return y;
            }
            int getX() {
                return x;
            }
        private:
            T x, y;
    }; 
}  // lgeometric

#endif  // LGEOMETRIC_POINT2D_HPP_
