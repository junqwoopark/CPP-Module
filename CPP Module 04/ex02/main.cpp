#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  std::cout << "-----Test#0 new Animal()-----" << std::endl;
  {
    std::cout << "const Animal* meta = new Animal();" << std::endl;
    std::cout << "error: allocating an object of abstract class type 'Animal'"
              << std::endl;
  }
  std::cout << std::endl;

  std::cout << "-----Test#1 new Dog()-----" << std::endl;
  {
    const AAnimal *dog = new Dog();
    std::cout << dog->getType() << std::endl;
    dog->makeSound();
    delete dog;
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 new Cat()-----" << std::endl;
  {
    const AAnimal *cat = new Cat();
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;
  }
  std::cout << std::endl;

  system("leaks a.out | grep 'leaked bytes.'");
  return (0);
}
