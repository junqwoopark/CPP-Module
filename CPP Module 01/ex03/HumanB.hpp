#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanB {
   public:
    HumanB(std::string name);
    ~HumanB();

    HumanB& operator=(HumanB const& rhs);

    void attack();

    void setWeapon(Weapon& weapon);

   private:
    std::string name;
    Weapon* weapon;
};

#endif /* ********************************************************** HUMANB_H \
        */
