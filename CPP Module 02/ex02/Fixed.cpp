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

bool Fixed::operator>(Fixed const& rhs) const {
    if (this->toFloat() > rhs.toFloat()) return (true);
    return (false);
}
bool Fixed::operator<(Fixed const& rhs) const {
    if (this->toFloat() < rhs.toFloat()) return (true);
    return (false);
}
bool Fixed::operator>=(Fixed const& rhs) const {
    if (this->toFloat() >= rhs.toFloat()) return (true);
    return (false);
}
bool Fixed::operator<=(Fixed const& rhs) const {
    if (this->toFloat() <= rhs.toFloat()) return (true);
    return (false);
}
bool Fixed::operator==(Fixed const& rhs) const {
    if (this->toFloat() == rhs.toFloat()) return (true);
    return (false);
}
bool Fixed::operator!=(Fixed const& rhs) const {
    if (this->toFloat() != rhs.toFloat()) return (true);
    return (false);
}

Fixed Fixed::operator+(Fixed const& rhs) const {
    return (Fixed(toFloat() + rhs.toFloat()));
}
Fixed Fixed::operator-(Fixed const& rhs) const {
    return (Fixed(toFloat() - rhs.toFloat()));
}
Fixed Fixed::operator*(Fixed const& rhs) const {
    return (Fixed(toFloat() * rhs.toFloat()));
}
Fixed Fixed::operator/(Fixed const& rhs) const {
    return (Fixed(toFloat() / rhs.toFloat()));
}
Fixed& Fixed::operator=(Fixed const& rhs) {
    std::cout << "Copy assignment Fixed::operator called" << std::endl;
    if (this != &rhs) {
        _value = rhs.getRawBits();
    }
    return *this;
}

Fixed& Fixed::operator++() {
    _value++;
    return (*this);
}
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    _value++;
    return (tmp);
}
Fixed& Fixed::operator--() {
    _value--;
    return (*this);
}
Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    _value--;
    return (tmp);
}

std::ostream& operator<<(std::ostream& o, Fixed const& i) {
    o << i.toFloat();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat(void) const { return (float(_value) / (1 << _bits)); }
int Fixed::toInt(void) const { return (_value >> _bits); }
Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a > b) return (a);
    return (b);
}
Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
    if (a > b) return (a);
    return (b);
}
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a < b) return (a);
    return (b);
}
Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
    if (a < b) return (a);
    return (b);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw) { _value = raw; }

/* ************************************************************************** */
