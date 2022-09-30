#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap junkpark("junkpark");

    std::cout << std::endl;
    // Test#1 printInfo()
    std::cout << "-----Test#1 printInfo()-----" << std::endl;
    junkpark.printInfo();
    std::cout << std::endl;

    // Test#2 highFivesGuys()
    std::cout << "-----Test#2 highFivesGuys()-----" << std::endl;
    junkpark.highFivesGuys();
    std::cout << std::endl;

    // Test#3 attack()
    std::cout << "-----Test#3 attack()-----" << std::endl;
    junkpark.attack("mher");
    std::cout << std::endl;

    // Test#4 whoAmI()
    std::cout << "-----Test#4 whoAmI()-----" << std::endl;
    junkpark.whoAmI();
    std::cout << std::endl;
}
