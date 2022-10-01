#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() : IMateriaSource() {
    std::memset(_inventory, 0, sizeof(_inventory));
}

MateriaSource::MateriaSource(const MateriaSource& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != NULL) delete _inventory[i];
    }
    return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs) {
    if (this != &rhs) {
        std::memcpy(_inventory, rhs._inventory, sizeof(_inventory));
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* materia) {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == NULL) {
            _inventory[i] = materia->clone();
            break;
        }
    }
    return;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    AMateria* ret = NULL;
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != NULL && _inventory[i]->getType() == type) {
            ret = _inventory[i]->clone();
            break;
        }
    }
    return (ret);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
