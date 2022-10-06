#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
  MateriaSource();
  MateriaSource(MateriaSource const &src);
  ~MateriaSource();

  MateriaSource &operator=(MateriaSource const &rhs);

  void learnMateria(AMateria *materia);
  AMateria *createMateria(std::string const &type);

private:
  AMateria *_inventory[4];
};

#endif /* *************************************************** MATERIASOURCE_H  \
        */
