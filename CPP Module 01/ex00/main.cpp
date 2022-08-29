#include "Zombie.h"

int main(void) {
    Zombie zombie("junkpark");
    zombie.announce();
    zombie = Zombie("mher");
    zombie.announce();
}
