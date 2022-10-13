#include "Converter.hpp"
#include <climits>
#include <cmath>
#include <float.h>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: ./convert [value]" << std::endl;
    return 1;
  }
  std::cout.precision(1);
  std::cout << std::fixed;

  Converter converter(argv[1]);
  converter.putChar();
  converter.putInt();
  converter.putFloat();
  converter.putDouble();
}
