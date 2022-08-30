#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
   public:
    Zombie();
    Zombie(std::string name_);
    ~Zombie();

    void announce(void);

    void setName(std::string name);

   private:
    std::string name;
};

#endif /* ********************************************************** ZOMBIE_H \
        */
