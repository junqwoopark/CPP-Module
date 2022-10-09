#include <climits>
#include <cmath>
#include <float.h>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  char *end_ptr;
  double tmp;

  std::cout << std::fixed;
  std::cout.precision(1);
  if (argc != 2) {
    std::cout << "Usage: ./convert to_convert_value" << std::endl;
    return (1);
  }
  double lf = std::strtod(argv[1], &end_ptr);
  if (*end_ptr != '\0') {
    if (!(*end_ptr == 'f' && *(end_ptr + 1) == '\0')) {
      std::cout << "Usage: ./convert to_convert_value" << std::endl;
      return (1);
    }
  }

  char c = static_cast<char>(lf);
  tmp = static_cast<double>(c);
  std::cout << "char: ";
  if (c > 0 ? floor(lf) == tmp : ceil(lf) == tmp) {
    if (std::isprint(c))
      std::cout << '\'' << c << '\'' << std::endl;
    else
      std::cout << "Non displayable" << std::endl;
  } else
    std::cout << "impossible" << std::endl;

  int d = static_cast<int>(lf);
  tmp = static_cast<double>(d);
  std::cout << "int: ";
  if (d > 0 ? floor(lf) == tmp : ceil(lf) == tmp) {
    std::cout << d << std::endl;
  } else {
    std::cout << "impossible" << std::endl;
  }

  float f = static_cast<float>(lf);
  tmp = static_cast<double>(f);
  std::cout << "float: ";
  if (!isinf(f) || isnan(f) || (isinf(f) && isinf(lf)))
    std::cout << f << 'f' << std::endl;
  else
    std::cout << "impossible" << std::endl;

  std::cout << "double: ";
  std::cout << lf << std::endl;
}
