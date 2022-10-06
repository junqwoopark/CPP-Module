#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal() {
  std::cout << "Dog has created." << std::endl;
  _type = "Dog";
  _brain = new Brain();
}

Dog::Dog(const Dog &src) {
  std::cout << "Dog has created." << std::endl;
  *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {
  delete _brain;
  std::cout << "Dog has deleted." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &rhs) {
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const { std::cout << "Bowwow! Bowwow!" << std::endl; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* **************************************************************************
 */
