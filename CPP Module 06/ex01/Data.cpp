#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data() : _idx(0), _name("data") {}

Data::Data(const Data &src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &Data::operator=(Data const &rhs) {
  if (this != &rhs) {
    _idx = rhs._idx;
    _name = rhs._name;
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
