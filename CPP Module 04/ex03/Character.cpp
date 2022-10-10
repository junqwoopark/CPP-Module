#include "Character.hpp"
#include "ICharacter.hpp"
#include <memory>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : ICharacter() {
  std::memset(_inventory, 0, sizeof(_inventory));
}

Character::Character(std::string const &name) : ICharacter() {
  _name = name;
  std::memset(_inventory, 0, sizeof(_inventory));
}

Character::Character(const Character &src) : ICharacter() { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {
  for (int i = 0; i < 4; i++) {
    if (_inventory[i] != NULL)
      delete _inventory[i];
  }
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &rhs) {
  if (this != &rhs) {
    _name = rhs._name;
    std::memcpy(_inventory, rhs._inventory, sizeof(_inventory));
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria *m) {
  for (int i = 0; i < 4; i++) {
    if (_inventory[i] == NULL) {
      _inventory[i] = m;
      break;
    }
  }
  return;
}

void Character::unequip(int idx) {
  if (4 <= idx || idx < 0)
    return;
  _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
  if (4 <= idx || idx < 0) {
    return;
  }
  if (_inventory[idx] != NULL) {
    _inventory[idx]->use(target);
  }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Character::getName() const { return (_name); }

/* ************************************************************************** */
