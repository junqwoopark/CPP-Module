#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include <string>

class Fixed {
   public:
    Fixed();
    Fixed(Fixed const& src);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();

    bool operator>(Fixed const& rhs) const;
    bool operator<(Fixed const& rhs) const;
    bool operator>=(Fixed const& rhs) const;
    bool operator<=(Fixed const& rhs) const;
    bool operator==(Fixed const& rhs) const;
    bool operator!=(Fixed const& rhs) const;

    Fixed operator+(Fixed const& rhs) const;
    Fixed operator-(Fixed const& rhs) const;
    Fixed operator*(Fixed const& rhs) const;
    Fixed operator/(Fixed const& rhs) const;
    Fixed& operator=(Fixed const& rhs);

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    float toFloat(void) const;
    int toInt(void) const;
    static Fixed& max(Fixed& a, Fixed& b);
    static Fixed const& max(Fixed const& a, Fixed const& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static Fixed const& min(Fixed const& a, Fixed const& b);

    int getRawBits(void) const;
    void setRawBits(int const raw);

   private:
    int _value;
    static const int _bits = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif /* *********************************************************** FIXED_H \
        */
