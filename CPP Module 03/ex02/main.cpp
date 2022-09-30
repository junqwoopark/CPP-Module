#include "FragTrap.hpp"

int main(void) {
    FragTrap junkpark("junkpark");

    std::cout << std::endl;
    // Test#1 printInfo()
    std::cout << "-----Test#1 printInfo()-----" << std::endl;
    junkpark.printInfo();
    std::cout << std::endl;

    // Test#2 highFivesGuys()
    std::cout << "-----Test#2 highFivesGuys()-----" << std::endl;
    junkpark.highFivesGuys();
    std::cout << std::endl;
}
