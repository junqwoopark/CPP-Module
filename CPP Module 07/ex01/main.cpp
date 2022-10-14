#include "iter.hpp"
#include <iostream>

int main(void) {
  char charArr[] = "abcdefg";
  int intArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

  iter(charArr, 7, print);
  std::cout << std::endl;

  iter(intArr, 9, print);
  std::cout << std::endl;

  iter(floatArr, 9, print);
  std::cout << std::endl;

  iter(charArr, 7, addOne);
  iter(intArr, 9, addOne);
  iter(floatArr, 9, addOne);

  iter(charArr, 7, print);
  std::cout << std::endl;

  iter(intArr, 9, print);
  std::cout << std::endl;

  iter(floatArr, 9, print);
  std::cout << std::endl;

  return 0;
}
