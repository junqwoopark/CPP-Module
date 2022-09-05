#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->number = 0;
}

Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    this->number = src.getRawBits();
}

Fixed::Fixed(const int number) {
    std::cout << "Int constructor called" << std::endl;
    this->number = number << this->fractional_bits;
}
Fixed::Fixed(const float number) {
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf(number * (1 << this->fractional_bits));
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
        this->number = rhs.getRawBits();
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

float Fixed::toFloat(void) const {
    return (float(number) / (1 << fractional_bits));
};
int Fixed::toInt(void) const { return (number >> fractional_bits); };

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->number);
}

void Fixed::setRawBits(int const raw) { this->number = raw; }

/* ************************************************************************** */
