#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal() {
  std::cout << "WrongCat has created." << std::endl;
  _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) {
  std::cout << "WrongCat has created." << std::endl;
  *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat() { std::cout << "WrongCat has deleted." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
  if (this != &rhs) {
    _type = rhs._type;
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound() const { std::cout << "Meow! Meow!" << std::endl; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
