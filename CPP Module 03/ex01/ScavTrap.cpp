#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const ScavTrap& src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
    // if ( this != &rhs )
    //{
    // this->_value = rhs.getValue();
    //}
    return *this;
}

std::ostream& operator<<(std::ostream& o, ScavTrap const& i) {
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
