#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
   public:
    Animal();
    Animal(Animal const& src);
    virtual ~Animal();

    Animal& operator=(Animal const& rhs);

    std::string getType() const;
    virtual void makeSound() const;

   protected:
    std::string _type;

   private:
};

#endif /* ********************************************************** ANIMAL_H \
        */
