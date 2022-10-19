#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
  std::cout << "-----Test#0 : Success-----" << std::endl;
  {
    std::vector<int> v;

    for (int i = 0; i < 10; i++) {
      v.push_back(i);
    }
    std::cout << *easyfind(v, 5) << std::endl;
  }
  std::cout << std::endl;

  std::cout << "-----Test#1 : Failure-----" << std::endl;
  {
    std::vector<int> v;

    for (int i = 0; i < 10; i++) {
      v.push_back(i);
    }
    std::cout << easyfind(v, 12) << std::endl;
  }
  std::cout << std::endl;
}
