#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() { std::cout << "AAnimal has created." << std::endl; }

AAnimal::AAnimal(const AAnimal &src) {
  *this = src;
  std::cout << "AAnimal has created." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal() { std::cout << "AAnimal has deleted." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
  if (this != &rhs) {
    _type = rhs._type;
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AAnimal::getType() const { return (_type); }

/* ************************************************************************** */
