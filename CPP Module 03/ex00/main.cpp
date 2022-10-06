#include "ClapTrap.hpp"

int main(void) {
  ClapTrap junkpark("junkpark");
  ClapTrap mher("mher");
  ClapTrap donshin("donshin");

  std::cout << std::endl;
  // Test#1 energyPoints
  std::cout << "-----Test#1 energyPoints-----" << std::endl;
  for (int i = 0; i < 10; i++) {
    junkpark.attack("mher");
  }
  junkpark.attack("mher");
  junkpark.beRepaired(10);
  std::cout << std::endl;

  // Test#1 hitPoints
  std::cout << "-----Test#2 hitPoints-----" << std::endl;
  mher.takeDamage(10);
  mher.attack("junkpark");
  mher.beRepaired(10);
  std::cout << std::endl;

  // Test#3 beRepaired()
  std::cout << "-----Test#3 beRepaired()-----" << std::endl;
  donshin.beRepaired(10);
  for (int i = 0; i < 20; i++) {
    donshin.takeDamage(1);
  }
  std::cout << std::endl;
}
