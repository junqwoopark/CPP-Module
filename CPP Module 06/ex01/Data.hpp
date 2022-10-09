#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

class Data {

public:
  Data();
  Data(Data const &src);
  ~Data();

  Data &operator=(Data const &rhs);

private:
  int _idx;
  std::string _name;
};

#endif /* ************************************************************ DATA_H  \
        */
