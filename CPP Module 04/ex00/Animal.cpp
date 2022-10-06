#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() { std::cout << "Animal has created." << std::endl; }

Animal::Animal(const Animal &src) {
  std::cout << "Animal has created." << std::endl;
  *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() { std::cout << "Animal has deleted." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const &rhs) {
  if (this != &rhs) {
    _type = rhs._type;
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const {
  std::cout << "There is no animal." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const { return (_type); }

/* ************************************************************************** */
