#include <iostream>

#include "RPN.hpp"

int main(int argc, char **argv) {
  try {
    if (argc != 2) {
      throw std::invalid_argument("Invalid number of arguments");
    }
    RPN rpn;
    std::string str(argv[1]);
    std::cout << rpn.calculate(str) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
