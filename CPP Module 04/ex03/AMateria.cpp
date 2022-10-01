#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& src) { *this = src; }

AMateria::AMateria(std::string const& type) { _type = type; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria& AMateria::operator=(AMateria const& rhs) {
    if (this != &rhs) {
        _type = rhs._type;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const& AMateria::getType() const { return (_type); }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
