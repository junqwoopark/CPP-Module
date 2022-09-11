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

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    static void pairAttackAndTakeDamage(ClapTrap& attacker, ClapTrap& defender);

    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;

    void setAttackDamage(unsigned int attack_damage);

   private:
    std::string _name;
    unsigned int _hit_points;
    unsigned int _energy_points;
    unsigned int _attack_damage;
    static bool _is_success;
};

std::ostream& operator<<(std::ostream& o, ClapTrap const& i);

#endif /* ******************************************************** CLAPTRAP_H \
        */
