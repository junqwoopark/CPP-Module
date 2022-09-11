#include "ClapTrap.hpp"

int main(void) {
    ClapTrap junkpark("junkpark");
    ClapTrap mher("mher");

    junkpark.setAttackDamage(9);
    ClapTrap::pairAttackAndTakeDamage(junkpark, mher);
    std::cout << junkpark << std::endl;
    std::cout << mher << std::endl;
    mher.beRepaired(30);
    std::cout << junkpark << std::endl;
    std::cout << mher << std::endl;
    mher.setAttackDamage(10);
    ClapTrap::pairAttackAndTakeDamage(mher, junkpark);
    std::cout << junkpark << std::endl;
    std::cout << mher << std::endl;
}
