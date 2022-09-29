#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal() {
    _type = "Cat";
    std::cout << "Cat has created." << std::endl;
}

Cat::Cat(const Cat& src) {
    *this = src;
    std::cout << "Cat has created." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() { std::cout << "Cat has deleted." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=(Cat const& rhs) {
    if (this != &rhs) {
        _type = rhs._type;
    }
    return *this;
}

// std::ostream& operator<<(std::ostream& o, Cat const& i) {
//     // o << "Value = " << i.getValue();
//     return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const { std::cout << "Meow! Meow!" << std::endl; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
