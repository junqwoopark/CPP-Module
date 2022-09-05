#include <iostream>

#include "Point.h"

int main(void) {
    Point a(0, 0);
    Point b(20, 0);
    Point c(10, 30);
    Point in(5, 1);
    Point out(30, 50);

    std::cout << bsp(a, b, c, in) << std::endl;
    std::cout << bsp(a, b, c, out) << std::endl;
    return 0;
}
