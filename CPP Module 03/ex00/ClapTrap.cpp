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
        this->_name = rhs.get_name();
        this->_attack_damage = rhs.get_attack_damage();
        this->_hit_points = rhs.get_hit_points();
        this->_energy_points = rhs.get_energy_points();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, ClapTrap const& i) {
    o << "Name = " << i.get_name() << std::endl;
    o << "HitPoints = " << i.get_hit_points() << std::endl;
    o << "EnergyPoints = " << i.get_energy_points() << std::endl;
    o << "AttackDamage = " << i.get_attack_damage() << std::endl;
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
    attacker.attack(defender.get_name());
    defender.takeDamage(attacker.get_attack_damage());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
