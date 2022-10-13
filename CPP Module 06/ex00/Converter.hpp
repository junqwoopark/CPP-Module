#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>

class Converter {

public:
  Converter();
  Converter(std::string value);
  Converter(Converter const &src);
  ~Converter();

  Converter &operator=(Converter const &rhs);

  void putChar();
  void putInt();
  void putFloat();
  void putDouble();

private:
  std::string _value;
  double _double;
  bool _isChar();
};

std::ostream &operator<<(std::ostream &o, Converter const &i);

#endif /* ******************************************************* CONVERTER_H  \
        */
