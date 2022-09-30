#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap() {
    _name = "fragTrap";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
    *this = src;
    std::cout << "FragTrap " << _name << " has created." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " has deleted." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap& FragTrap::operator=(FragTrap const& rhs) {
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

void FragTrap::highFivesGuys() {
    std::cout << "positive high fives request" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* **************************************************************************
 */
