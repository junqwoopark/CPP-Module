#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : AAnimal() {
  std::cout << "Cat has created." << std::endl;
  _type = "Cat";
  _brain = new Brain();
}

Cat::Cat(const Cat &src) {
  std::cout << "Cat has created." << std::endl;
  _brain = new Brain();
  *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
  delete _brain;
  std::cout << "Cat has deleted." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs) {
  if (this != &rhs) {
    _type = rhs._type;
    *(_brain) = *(rhs._brain);
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const { std::cout << "Meow! Meow!" << std::endl; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
