#include "Zombie.h"

int main(void) {
    // announce
    Zombie zombie("announce");
    zombie.announce();

    // randomChump
    randomChump("random");

    // newZombie
    Zombie *new_zombie = newZombie("new");
    new_zombie->announce();
    delete new_zombie;

    return (0);
}
