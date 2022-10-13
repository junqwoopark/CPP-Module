#include "Converter.hpp"
#include <math.h>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converter::Converter() {}

Converter::Converter(std::string value) : _value(value) {
  try {
    if (_isChar())
      _double = static_cast<double>(_value[0]);
    else {
      _double = std::strtod(_value.c_str(), NULL);
    }
  } catch (std::exception &e) {
    std::cout << "Invalid value" << std::endl;
    exit(1);
  }
}

Converter::Converter(const Converter &src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converter::~Converter() {}

/*
** --------------------------------- OVERLOAD
*---------------------------------
*/

Converter &Converter::operator=(Converter const &rhs) {
  if (this != &rhs) {
    _value = rhs._value;
    _double = rhs._double;
  }
  return *this;
}

/*
** --------------------------------- METHODS
*----------------------------------
*/

void Converter::putChar() {
  char c = static_cast<char>(_double);
  double tmp = static_cast<double>(c);

  std::cout << "char: ";
  if (c > 0 ? floor(_double) == tmp : ceil(_double) == tmp) {
    if (std::isprint(c))
      std::cout << '\'' << c << '\'' << std::endl;
    else
      std::cout << "Non displayable" << std::endl;
  } else
    std::cout << "impossible" << std::endl;
}

void Converter::putInt() {
  int d = static_cast<int>(_double);
  double tmp = static_cast<double>(d);
  std::cout << "int: ";
  if (d > 0 ? floor(_double) == tmp : ceil(_double) == tmp) {
    std::cout << d << std::endl;
  } else {
    std::cout << "impossible" << std::endl;
  }
}

void Converter::putFloat() {
  float _float = static_cast<float>(_double);

  std::cout << "float: ";
  if (!isinf(_float) || isnan(_float))
    std::cout << _float << 'f' << std::endl;
  else if (isinf(_float) &&
           (_value.find("inf") == 0 || _value.find("inf") == 1))
    std::cout << _float << 'f' << std::endl;
  else
    std::cout << "impossible" << std::endl;
}

void Converter::putDouble() {
  std::cout << "double: ";
  if (!isinf(_double) || isnan(_double))
    std::cout << _double << std::endl;
  else if (isinf(_double) &&
           (_value.find("inf") == 0 || _value.find("inf") == 1))
    std::cout << _double << std::endl;
  else
    std::cout << "impossible" << std::endl;
}

bool Converter::_isChar() {
  if (_value.length() == 1 && !std::isdigit(_value[0]))
    return true;
  return false;
}

/*
** --------------------------------- ACCESSOR
*---------------------------------
*/

/* **************************************************************************
 */
