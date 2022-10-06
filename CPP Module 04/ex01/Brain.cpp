#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() { std::cout << "Brain has created." << std::endl; }

Brain::Brain(const Brain &src) {
  *this = src;
  std::cout << "Brain has created." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain() { std::cout << "Brain has deleted." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator=(Brain const &rhs) {
  if (this != &rhs) {
    for (int i = 0; i < 100; i++) {
      _ideas[i] = rhs._ideas[i];
    }
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
