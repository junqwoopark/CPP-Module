#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    _value = src.getRawBits();
}

Fixed::Fixed(const int number) {
    std::cout << "Int constructor called" << std::endl;
    _value = number << _bits;
}
Fixed::Fixed(const float number) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(number * (1 << _bits));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed& Fixed::operator=(Fixed const& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        _value = rhs.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const& i) {
    o << i.toFloat();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat(void) const { return (float(_value) / (1 << _bits)); };
int Fixed::toInt(void) const { return (_value >> _bits); };

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw) { _value = raw; }

/* ************************************************************************** */
