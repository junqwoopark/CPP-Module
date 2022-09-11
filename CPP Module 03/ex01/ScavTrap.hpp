#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   public:
    ScavTrap();
    ScavTrap(ScavTrap const& src);
    ~ScavTrap();

    ScavTrap& operator=(ScavTrap const& rhs);

    void guardGate();

   private:
};

std::ostream& operator<<(std::ostream& o, ScavTrap const& i);

#endif /* ******************************************************** SCAVTRAP_H \
        */
