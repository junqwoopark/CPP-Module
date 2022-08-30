#include "Zombie.h"

int main(void) {
    // zombieHorde
    Zombie *zombie_horde = zombieHorde(5, "zombie_horde");
    zombie_horde[0].announce();
    zombie_horde[1].announce();
    zombie_horde[2].announce();
    zombie_horde[3].announce();
    zombie_horde[4].announce();
    delete[] zombie_horde;
    return (0);
}
