#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal {
public:
  AAnimal();
  AAnimal(AAnimal const &src);
  virtual ~AAnimal() = 0;

  AAnimal &operator=(AAnimal const &rhs);

  std::string getType() const;
  virtual void makeSound() const = 0;

protected:
  std::string _type;

private:
};

#endif /* ********************************************************** AAnimal_H \
        */
