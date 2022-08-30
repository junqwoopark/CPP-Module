#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie() { this->name = "Default"; }

Zombie::Zombie(std::string name) { this->name = name; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie() { std::cout << this->name << ": Destroy..." << std::endl; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Zombie::setName(std::string name) { this->name = name; }

/* ************************************************************************** */
