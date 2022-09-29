#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
    : _name("clapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " has created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " has created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " has deleted." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_attackDamage = rhs._attackDamage;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints && _hitPoints) {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!"
                  << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << "do nothing!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= amount) {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " die." << std::endl;
    } else {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " take " << amount << " damage."
                  << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints && _hitPoints) {
        _hitPoints += amount;
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " repair " << amount
                  << " hit points." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << "do nothing!" << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
