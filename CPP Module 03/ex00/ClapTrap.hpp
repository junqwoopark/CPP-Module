#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
   public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const& src);
    ~ClapTrap();

    ClapTrap& operator=(ClapTrap const& rhs);

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setName(const std::string& name);
    std::string getName() const;
    void printInfo() const;

   private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
};

#endif /* ******************************************************** CLAPTRAP_H \
        */
