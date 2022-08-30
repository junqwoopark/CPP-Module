#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie() { name = "Default"; }

Zombie::Zombie(std::string name_) { name = name_; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie() { std::cout << name << ": Destroy..." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Zombie::setName(std::string name) { this->name = name; }

/* ************************************************************************** */
