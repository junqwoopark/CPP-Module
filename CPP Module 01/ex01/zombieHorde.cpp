#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name) {
    Zombie *zombie_horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombie_horde[i].setName(name);
    }
    return (zombie_horde);
}
