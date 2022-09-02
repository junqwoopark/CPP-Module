#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
   public:
    Fixed();
    Fixed(Fixed const& src);
    ~Fixed();

    Fixed& operator=(Fixed const& rhs);

   private:
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif /* *********************************************************** FIXED_H \
        */
