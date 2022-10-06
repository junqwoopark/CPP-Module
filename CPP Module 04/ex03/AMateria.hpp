#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <stdarg.h>

#include <iostream>
#include <string>

class ICharacter;

class AMateria {
public:
  AMateria();
  AMateria(AMateria const &src);
  AMateria(std::string const &type);
  virtual ~AMateria();

  AMateria &operator=(AMateria const &rhs);

  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target) { (void)target; };

  std::string const &getType() const;

protected:
  std::string _type;

private:
};

#endif /* ******************************************************** AMATERIA_H  \
        */
