#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string name) { this->name = name; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType()
              << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

/* ************************************************************************** */
