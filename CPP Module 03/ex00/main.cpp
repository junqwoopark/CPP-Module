#include "ClapTrap.hpp"

int main(void) {
    ClapTrap junkpark("junkpark");
    ClapTrap mher("mher");

    junkpark.set_attack_damage(9);
    ClapTrap::pairAttackAndTakeDamage(junkpark, mher);
    std::cout << junkpark << std::endl;
    std::cout << mher << std::endl;
    mher.beRepaired(30);
    std::cout << junkpark << std::endl;
    std::cout << mher << std::endl;
    mher.set_attack_damage(10);
    ClapTrap::pairAttackAndTakeDamage(mher, junkpark);
    std::cout << junkpark << std::endl;
    std::cout << mher << std::endl;
}
