#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : ICharacter() {
    std::memset(_inventory, 0, sizeof(_inventory));
}

Character::Character(std::string const& name) : ICharacter() {
    _name = name;
    std::memset(_inventory, 0, sizeof(_inventory));
}

Character::Character(const Character& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character& Character::operator=(Character const& rhs) {
    if (this != &rhs) {
        _name = rhs._name;
        std::memcpy(_inventory, rhs._inventory, sizeof(_inventory));
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const& Character::getName() const { return (_name); }

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == NULL) {
            _inventory[i] = m;
            break;
        }
    }
    return;
}

void Character::unequip(int idx) { _inventory[idx] = NULL; }

void Character::use(int idx, ICharacter& target) {
    if (_inventory[idx] != NULL) {
        _inventory[idx]->use(target);
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
