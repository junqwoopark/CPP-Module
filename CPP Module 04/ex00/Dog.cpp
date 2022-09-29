#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal() {
    _type = "Dog";
    std::cout << "Dog has created." << std::endl;
}

Dog::Dog(const Dog& src) {
    *this = src;
    std::cout << "Dog has created." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() { std::cout << "Dog has deleted." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=(Dog const& rhs) {
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

// std::ostream& operator<<(std::ostream& o, Dog const& i) {
// o << "Value = " << i.getValue();
// return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const { std::cout << "Bowwow! Bowwow!" << std::endl; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* **************************************************************************
 */
