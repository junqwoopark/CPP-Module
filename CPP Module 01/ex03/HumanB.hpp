#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanB {
   public:
    HumanB(std::string name_);
    ~HumanB();

    HumanB& operator=(HumanB const& rhs);

    void attack();

    void setWeapon(Weapon& weapon_);

   private:
    std::string name;
    Weapon tmp;
    Weapon* weapon;
};

#endif /* ********************************************************** HUMANB_H \
        */
