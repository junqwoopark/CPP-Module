#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal has created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
  std::cout << "WrongAnimal has created." << std::endl;
  *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal has deleted." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
  if (this != &rhs) {
    _type = rhs._type;
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound() const {
  std::cout << "There is no WrongAnimal." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string WrongAnimal::getType() const { return (_type); }

/* ************************************************************************** */
