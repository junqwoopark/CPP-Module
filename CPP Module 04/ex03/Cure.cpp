#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure& Cure::operator=(Cure const& rhs) {
    if (this != &rhs) {
        _type = rhs._type;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Cure::clone() const {
    AMateria* ret = new Cure(*this);
    return (ret);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* **************************************************************************
 */
