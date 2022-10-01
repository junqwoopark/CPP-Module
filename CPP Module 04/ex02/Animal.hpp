#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
   public:
    Animal();
    Animal(Animal const& src);
    virtual ~Animal() = 0;

    Animal& operator=(Animal const& rhs);

    std::string getType() const;
    virtual void makeSound() const = 0;

   protected:
    std::string _type;

   private:
};

#endif /* ********************************************************** ANIMAL_H \
        */
