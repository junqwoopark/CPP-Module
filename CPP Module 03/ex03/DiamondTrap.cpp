#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
    _name = "diamondTrap";
    ClapTrap::_name = _name + "_clap_name";
    std::cout << "DiamondTrap " << _name << " has created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    _name = name;
    ClapTrap::_name = _name + "_clap_name";
    std::cout << "DiamondTrap " << _name << " has created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {
    *this = src;
    std::cout << "DiamondTrap " << _name << " has created." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " has deleted." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs) {
    if (this != &rhs) {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI() {
    std::cout << "ClapTrap::_name = " << ClapTrap::_name << std::endl;
    std::cout << "DiamondTrap::_name = " << _name << std::endl;
}

void DiamondTrap::printInfo() const {
    std::cout << "name = " << _name << std::endl;
    std::cout << "hitPoints = " << _hitPoints << std::endl;
    std::cout << "energyPoints = " << _energyPoints << std::endl;
    std::cout << "attackDamage = " << _attackDamage << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
