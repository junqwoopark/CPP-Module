#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
   public:
    Weapon();
    Weapon(const std::string type_);
    ~Weapon();

    Weapon& operator=(Weapon const& rhs);

    const std::string& getType() const;
    void setType(const char* type_);

   private:
    std::string type;
};

#endif /* ********************************************************** WEAPON_H \
        */
