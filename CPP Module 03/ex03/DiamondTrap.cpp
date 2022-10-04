#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
  std::cout << "DiamondTrap " << _name << " has created." << std::endl;
  _name = "diamondTrap";
  _energyPoints = 50;
  ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name) {
  std::cout << "DiamondTrap " << _name << " has created." << std::endl;
  _name = name;
  _energyPoints = 50;
  ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
  std::cout << "DiamondTrap " << _name << " has created." << std::endl;
  *this = src;
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

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
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
