#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string name_) : weapon(tmp) { name = name_; }

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
    std::cout << name << " attacks with their " << weapon.getType()
              << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void HumanB::setWeapon(Weapon &weapon_) { weapon = weapon_; }

/* ************************************************************************** */