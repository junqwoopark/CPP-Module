#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
   public:
    Fixed();
    Fixed(Fixed const& src);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed& operator=(Fixed const& rhs);

   private:
    int number;
    static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif /* *********************************************************** FIXED_H \
        */
