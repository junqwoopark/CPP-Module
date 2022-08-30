#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon() {}
Weapon::Weapon(const std::string type) { this->type = type; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Weapon& Weapon::operator=(Weapon const& rhs) {
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string& Weapon::getType() const { return (this->type); };
void Weapon::setType(const char* type) { this->type = type; }

/* ************************************************************************** */
