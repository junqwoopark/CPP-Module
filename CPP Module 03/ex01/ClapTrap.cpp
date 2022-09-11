#include "ClapTrap.hpp"

bool ClapTrap::_is_success = false;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
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
        this->_name = rhs.getName();
        this->_attack_damage = rhs.getAttackDamage();
        this->_hit_points = rhs.getHitPoints();
        this->_energy_points = rhs.getEnergyPoints();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, ClapTrap const& i) {
    o << "Name = " << i.getName() << std::endl;
    o << "HitPoints = " << i.getHitPoints() << std::endl;
    o << "EnergyPoints = " << i.getEnergyPoints() << std::endl;
    o << "AttackDamage = " << i.getAttackDamage() << std::endl;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string& target) {
    if (_energy_points && _hit_points) {
        _is_success = true;
        _energy_points -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attack_damage << " points of damage!"
                  << std::endl;
    } else {
        _is_success = false;
        std::cout << "ClapTrap " << _name << "do nothing!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (_is_success) {
        if (_hit_points <= amount) {
            _hit_points = 0;
            std::cout << "ClapTrap " << _name << " die." << std::endl;
        } else {
            _hit_points -= amount;
            std::cout << "ClapTrap " << _name << " take " << amount
                      << " damage." << std::endl;
        }
    } else {
        std::cout << "Nothing happens..." << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy_points && _hit_points) {
        _hit_points += amount;
        _energy_points -= 1;
        std::cout << "ClapTrap " << _name << " repair " << amount
                  << " hit points." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << "do nothing!" << std::endl;
    }
}

void ClapTrap::pairAttackAndTakeDamage(ClapTrap& attacker, ClapTrap& defender) {
    attacker.attack(defender.getName());
    defender.takeDamage(attacker.getAttackDamage());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName(void) const { return (_name); }
unsigned int ClapTrap::getHitPoints(void) const { return (_hit_points); }
unsigned int ClapTrap::getEnergyPoints(void) const { return (_energy_points); }
unsigned int ClapTrap::getAttackDamage(void) const { return (_attack_damage); }

void ClapTrap::setAttackDamage(unsigned int attack_damage) {
    _attack_damage = attack_damage;
}

/* ************************************************************************** */
