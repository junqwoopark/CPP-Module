#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define GETTER(T, member) \
    const T& get##member() const { return member; }
#define SETTER(T, member) \
    void set##member(const T& value) { member = value; }
#define PGSETTER(T, member) \
   private:                 \
    T member;               \
                            \
   public:                  \
    SETTER(T, member) GETTER(T, member) private:

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

   private:
    PGSETTER(std::string, _name);
    PGSETTER(unsigned int, _hit_points);
    PGSETTER(unsigned int, _energy_points);
    PGSETTER(unsigned int, _attack_damage);
    static bool _is_success;
};

std::ostream& operator<<(std::ostream& o, ClapTrap const& i);

#endif /* ******************************************************** CLAPTRAP_H \
        */
