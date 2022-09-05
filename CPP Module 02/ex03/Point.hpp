#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>

#include "Fixed.hpp"

class Point {
   public:
    Point();
    Point(Fixed x, Fixed y);
    Point(Point const& src);
    ~Point();

    Point& operator=(Point const& rhs);

    Fixed getX() const;
    Fixed getY() const;

   private:
    Fixed const _x;
    Fixed const _y;
};

std::ostream& operator<<(std::ostream& o, Point const& i);

#endif /* *********************************************************** POINT_H \
        */
