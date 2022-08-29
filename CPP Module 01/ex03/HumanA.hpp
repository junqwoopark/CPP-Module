#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
   public:
    HumanA(std::string name_, Weapon &weapon_);
    ~HumanA();

    void attack();

   private:
    std::string name;
    Weapon &weapon;
};

#endif /* ********************************************************** HUMANA_H \
        */
