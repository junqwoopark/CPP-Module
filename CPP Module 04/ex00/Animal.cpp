#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() { std::cout << "Animal has created." << std::endl; }

Animal::Animal(const Animal& src) {
    *this = src;
    std::cout << "Animal has created." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() { std::cout << "Animal has deleted." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal& Animal::operator=(Animal const& rhs) {
    if (this != &rhs) {
        _type = rhs._type;
    }
    return *this;
}

// std::ostream& operator<<(std::ostream& o, Animal const& i) {
// o << "Value = " << i.getValue();
// return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::getType() const { return (_type); }

void Animal::makeSound() const {
    std::cout << "There is no animal." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
