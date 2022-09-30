#include "ScavTrap.hpp"

int main(void) {
    ScavTrap junkpark("junkpark");

    std::cout << std::endl;
    // Test#1 printInfo()
    std::cout << "-----Test#1 printInfo()-----" << std::endl;
    junkpark.printInfo();
    std::cout << std::endl;

    // Test#2 guardGate()
    std::cout << "-----Test#2 guardGate()-----" << std::endl;
    junkpark.guardGate();
    std::cout << std::endl;

    // Test#3 attack()
    std::cout << "-----Test#3 attack()-----" << std::endl;
    junkpark.attack("mher");
    std::cout << std::endl;
}
