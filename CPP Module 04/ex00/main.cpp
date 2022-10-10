#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  std::cout << "-----Test#0 new Animal()-----" << std::endl;
  {
    const Animal *meta = new Animal();
    std::cout << meta->getType() << std::endl;
    meta->makeSound();
    delete meta;
  }
  std::cout << std::endl;

  std::cout << "-----Test#1 new Dog()-----" << std::endl;
  {
    const Animal *dog = new Dog();
    std::cout << dog->getType() << std::endl;
    dog->makeSound();
    delete dog;
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 new Cat()-----" << std::endl;
  {
    const Animal *cat = new Cat();
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;
  }
  std::cout << std::endl;
  return (0);
}
